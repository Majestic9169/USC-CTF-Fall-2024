#include "out.h"

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;

  iVar1 = __gmon_start__();
  return iVar1;
}

void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}

// WARNING: Unknown calling convention -- yet parameter storage is locked

istream *std::getline<char, std::char_traits<char>, std::allocator<char>>(
    istream *param_1, string *param_2)

{
  istream *piVar1;

  piVar1 = getline<char, std::char_traits<char>, std::allocator<char>>(param_1,
                                                                       param_2);
  return piVar1;
}

// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::string::compare(char *param_1)

{
  compare(param_1);
  return;
}

void __thiscall std::istream::operator>>(istream *this, int *param_1)

{
  operator>>((istream *)this, param_1);
  return;
}

void __thiscall std::string::~string(void *this)

{
  ~string(this);
  return;
}

void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}

// WARNING: Unknown calling convention -- yet parameter storage is locked

ostream *std::operator<<(ostream *param_1, string *param_2)

{
  ostream *poVar1;

  poVar1 = operator<<(param_1, param_2);
  return poVar1;
}

// WARNING: Unknown calling convention -- yet parameter storage is locked

ostream *std::operator<<(ostream *param_1, char *param_2)

{
  ostream *poVar1;

  poVar1 = operator<<(param_1, param_2);
  return poVar1;
}

void __thiscall std::ostream::operator<<(
    void *this, _func_ostream_ptr_ostream_ptr * param_1)

{
  operator<<(this, param_1);
  return;
}

void __stack_chk_fail(void)

{
  // WARNING: Subroutine does not return
  __stack_chk_fail();
}

void __thiscall std::string::string(void *this)

{
  string(this);
  return;
}

void __thiscall std::ios_base::Init::Init(Init *this)

{
  Init(this);
  return;
}

void __thiscall std::ostream::operator<<(void *this, int param_1)

{
  operator<<(this, param_1);
  return;
}

// WARNING: Unknown calling convention -- yet parameter storage is locked

void std::istream::ignore(void)

{
  ignore();
  return;
}

void processEntry _start(undefined8 param_1, undefined8 param_2)

{
  undefined auStack_8[8];

  __libc_start_main(main, param_2, &stack0x00000008, 0, 0, param_1, auStack_8);
  do {
    // WARNING: Do nothing block with infinite loop
  } while (true);
}

// WARNING: Removing unreachable block (ram,0x00101243)
// WARNING: Removing unreachable block (ram,0x0010124f)

void deregister_tm_clones(void)

{
  return;
}

// WARNING: Removing unreachable block (ram,0x00101284)
// WARNING: Removing unreachable block (ram,0x00101290)

void register_tm_clones(void)

{
  return;
}

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}

void frame_dummy(void)

{
  register_tm_clones();
  return;
}

// WARNING: Unknown calling convention

int main(void)

{
  long lVar1;
  bool bVar2;
  ostream *poVar3;
  int *piVar4;
  long in_FS_OFFSET;
  int crypto;
  int forensics;
  int osint;
  int pwn;
  int rev;
  int web;
  int water;
  int max_ingredient;
  int second_ingredient;
  int x;
  const_iterator __for_begin;
  const_iterator __for_begin_1;
  initializer_list<int> *__for_range;
  const_iterator __for_end;
  initializer_list<int> *__for_range_1;
  const_iterator __for_end_1;
  initializer_list<int> local_78;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  string secret;

  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  poVar3 = std::operator<<((ostream *)std::cout,
                           "Time to make a ghastly cyberbrew!");
  std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
  poVar3 = std::operator<<((ostream *)std::cout,
                           "Tell me how much of each ingredient to put in.");
  std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
  crypto = 0;
  forensics = 0;
  osint = 0;
  pwn = 0;
  rev = 0;
  web = 0;
  water = 0;
  poVar3 =
      std::operator<<((ostream *)std::cout, "How many crypto crickets? (int)");
  std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
  std::istream::operator>>((istream *)std::cin, &crypto);
  poVar3 =
      std::operator<<((ostream *)std::cout, "How many forensics fungi? (int)");
  std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
  std::istream::operator>>((istream *)std::cin, &forensics);
  poVar3 = std::operator<<((ostream *)std::cout, "How many osint oreos? (int)");
  std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
  std::istream::operator>>((istream *)std::cin, &osint);
  poVar3 =
      std::operator<<((ostream *)std::cout, "How many plants of pwn? (int)");
  std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
  std::istream::operator>>((istream *)std::cin, &pwn);
  poVar3 = std::operator<<((ostream *)std::cout, "How many rev redcaps? (int)");
  std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
  std::istream::operator>>((istream *)std::cin, &rev);
  poVar3 = std::operator<<((ostream *)std::cout, "How many cobwebs? (int)");
  std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
  std::istream::operator>>((istream *)std::cin, &web);
  poVar3 =
      std::operator<<((ostream *)std::cout, "How many ounces of water? (int)");
  std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
  std::istream::operator>>((istream *)std::cin, &water);
  std::istream::ignore();
  std::string::string(&secret);
  poVar3 =
      std::operator<<((ostream *)std::cout, "What secret ingredient? (string)");
  std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
  std::getline<char, std::char_traits<char>, std::allocator<char>>(
      (istream *)std::cin, &secret);
  max_ingredient = 0;
  second_ingredient = 0;
  local_78._M_len = 6;
  local_68 = crypto;
  local_64 = forensics;
  local_60 = osint;
  local_5c = pwn;
  local_58 = rev;
  local_54 = web;
  local_78._M_array = &local_68;
  __for_range = &local_78;
  __for_begin = std::initializer_list<int>::begin(__for_range);
  __for_end = std::initializer_list<int>::end(__for_range);
  for (; __for_begin != __for_end; __for_begin = __for_begin + 1) {
    x = *__for_begin;
    piVar4 = std::max<int>(&max_ingredient, &x);
    max_ingredient = *piVar4;
  }
  local_78._M_len = 6;
  local_68 = crypto;
  local_64 = forensics;
  local_60 = osint;
  local_5c = pwn;
  local_58 = rev;
  local_54 = web;
  local_78._M_array = &local_68;
  __for_range_1 = &local_78;
  __for_begin_1 = std::initializer_list<int>::begin(__for_range_1);
  __for_end_1 = std::initializer_list<int>::end(__for_range_1);
  for (; __for_begin_1 != __for_end_1; __for_begin_1 = __for_begin_1 + 1) {
    x = *__for_begin_1;
    if (x < max_ingredient) {
      piVar4 = std::max<int>(&second_ingredient, &x);
      second_ingredient = *piVar4;
    }
  }
  if (max_ingredient == 0) {
    if (water < 1) {
      poVar3 = std::operator<<((ostream *)std::cout, "You created... nothing.");
      std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
    } else {
      poVar3 = std::operator<<((ostream *)std::cout,
                               "You poured a nice glass of water.");
      std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
    }
  } else if (water < 1) {
    poVar3 = std::operator<<((ostream *)std::cout, "You created a salad.");
    std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
  } else if (max_ingredient == crypto) {
    if ((second_ingredient == forensics) && (0 < forensics)) {
      poVar3 = std::operator<<((ostream *)std::cout,
                               "You created a draught of decoding :}");
      std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
    } else if ((second_ingredient == web) && (0 < web)) {
      poVar3 = std::operator<<((ostream *)std::cout,
                               "You created a slosh of secure sending :}");
      std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
    } else {
      poVar3 = std::operator<<((ostream *)std::cout,
                               "You created an elixir of encoding :}");
      std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
    }
  } else if (max_ingredient == forensics) {
    if ((second_ingredient == osint) && (0 < osint)) {
      poVar3 = std::operator<<((ostream *)std::cout,
                               "You created an ichor of investigation :}");
      std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
    } else {
      poVar3 = std::operator<<((ostream *)std::cout,
                               "You created an infusion of forensics :}");
      std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
    }
  } else if (max_ingredient == osint) {
    poVar3 = std::operator<<((ostream *)std::cout,
                             "You created a goo of googling :}");
    std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
  } else if ((max_ingredient == pwn) || (max_ingredient == rev)) {
    if (((((crypto == 0x1eea) && (forensics == 0x1b1fc)) && (osint == 0x906)) &&
         ((pwn == 0xc889 && (rev == 0x283389e)))) &&
        ((web == 0x2397 &&
          (bVar2 = std::operator==
           <char, _std::char_traits<char>, _std::allocator<char> _>(
               &secret, "decompiler"),
           bVar2)))) {
      bVar2 = true;
    } else {
      bVar2 = false;
    }
    if (bVar2) {
      poVar3 = std::operator<<((ostream *)std::cout,
                               "You created a philter of flag charming :}");
      std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
      poVar3 = std::operator<<((ostream *)std::cout, "CYBORG{RECIPE=");
      poVar3 = (ostream *)std::ostream::operator<<(poVar3, crypto);
      poVar3 = std::operator<<(poVar3, "-");
      poVar3 = (ostream *)std::ostream::operator<<(poVar3, forensics);
      poVar3 = std::operator<<(poVar3, "-");
      poVar3 = (ostream *)std::ostream::operator<<(poVar3, osint);
      poVar3 = std::operator<<(poVar3, "-");
      poVar3 = (ostream *)std::ostream::operator<<(poVar3, pwn);
      poVar3 = std::operator<<(poVar3, "-");
      poVar3 = (ostream *)std::ostream::operator<<(poVar3, rev);
      poVar3 = std::operator<<(poVar3, "-");
      poVar3 = (ostream *)std::ostream::operator<<(poVar3, web);
      poVar3 = std::operator<<(poVar3, "-");
      poVar3 = std::operator<<(poVar3, &secret);
      poVar3 = std::operator<<(poVar3, "}");
      std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
    } else if ((second_ingredient == crypto) && (0 < crypto)) {
      poVar3 = std::operator<<((ostream *)std::cout,
                               "You created a balsam of buried secrets :}");
      std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
    } else {
      poVar3 = std::operator<<((ostream *)std::cout,
                               "You created a salve of shattered secrets :}");
      std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
    }
  } else if (max_ingredient == web) {
    if ((second_ingredient == pwn) && (0 < pwn)) {
      poVar3 = std::operator<<((ostream *)std::cout,
                               "You created an essence of exploitation :}");
      std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
    } else {
      poVar3 = std::operator<<((ostream *)std::cout,
                               "You created a tonic of TCP :}");
      std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
    }
  } else {
    poVar3 = std::operator<<((ostream *)std::cout,
                             "You created a mysterious smoothie :}");
    std::ostream::operator<<(poVar3, std::endl<char, std::char_traits<char>>);
  }
  std::string::~string(&secret);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  // WARNING: Subroutine does not return
  __stack_chk_fail();
}

void __static_initialization_and_destruction_0(int __initialize_p,
                                               int __priority)

{
  int __priority_local;
  int __initialize_p_local;

  if ((__initialize_p == 1) && (__priority == 0xffff)) {
    std::ios_base::Init::Init((Init *)&std::__ioinit);
    __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &__dso_handle);
  }
  return;
}

// WARNING: Unknown calling convention -- yet parameter storage is locked

void _GLOBAL__sub_I_main(void)

{
  __static_initialization_and_destruction_0(1, 0xffff);
  return;
}

// DWARF original prototype: const_iterator begin(initializer_list<int> * this)

const_iterator __thiscall std::initializer_list<int>::begin(
    initializer_list<int> *this)

{
  initializer_list<int> *this_local;

  return this->_M_array;
}

// DWARF original prototype: const_iterator end(initializer_list<int> * this)

const_iterator __thiscall std::initializer_list<int>::end(
    initializer_list<int> *this)

{
  const_iterator piVar1;
  size_type sVar2;
  initializer_list<int> *this_local;

  piVar1 = begin(this);
  sVar2 = size(this);
  return piVar1 + sVar2;
}

// DWARF original prototype: size_type size(initializer_list<int> * this)

size_type __thiscall std::initializer_list<int>::size(
    initializer_list<int> *this)

{
  initializer_list<int> *this_local;

  return this->_M_len;
}

// WARNING: Unknown calling convention -- yet parameter storage is locked

int *std::max<int>(int *__a, int *__b)

{
  int *__b_local;
  int *__a_local;

  if (*__a < *__b) {
    __a = __b;
  }
  return __a;
}

// WARNING: Unknown calling convention -- yet parameter storage is locked
// DWARF original name: operator==<char, std::char_traits<char>,
// std::allocator<char> >

bool std::operator== <char, _std::char_traits<char>, _std::allocator<char> _>(
    basic_string<char, _std::char_traits<char>, _std::allocator<char> _> *__lhs,
    char *__rhs)

{
  int iVar1;
  char *__rhs_local;
  basic_string<char, _std::char_traits<char>, _std::allocator<char> _>
      *__lhs_local;

  iVar1 = std::string::compare((char *)__lhs);
  return iVar1 == 0;
}

void _fini(void)

{
  return;
}
