---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html
  bundledCode: "#line 1 \"01_language/bit_hacks.cpp\"\n/*\nNext permutation of x as\
    \ a bit sequence.\n\ne.g.    001011 -> 001101\n        110011 -> 110110\n*/\n\
    using ull = uint64_t;\null next_bits_permutation(ull x) {\n  ull c = __builtin_ctzll(x),\
    \ r = x + (1ULL << c);\n  return (r ^ x) >> (c + 2) | r;\n}\n\n/*\nIterate over\
    \ all (proper) subsets of bitset s.\ne.g. 1101 -> {1000, 0100, 0001, 1100, 1001,\
    \ 0101}\n*/\nusing ull = uint64_t;\nvoid subsets(ull s) {\n  for (ull x = s; x;)\
    \ {\n    --x &= s;\n    /* do stuff */\n  }\n}\n\n/*\nFind the low bit\n*/\nint\
    \ lowbit(auto x) {\n    return x & (-x);\n}\n\n/*\nGCC specific functions for\
    \ bitwise operations\n\nSee: https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html\n\
    */\n__builtin_popcount(x) // popcount (unsigned int)\n__builtin_popcountll(x)\
    \ // popcount (unsigned long long)\n__builtin_ctz(x) // # of trailing zeros (unsgined\
    \ int; undefined if x = 0)\n__builtin_ctzll(x) // # of trailing zeros (unsgined\
    \ long long; undefined if x = 0)\n__builtin_clz(x) // # of leading zeros (unsgined\
    \ int; undefined if x = 0)\n__builtin_clzll(x) // # of leading zeros (unsgined\
    \ long long; undefined if x = 0)\n__builtin_ffs(x) // 1 + index of least significant\
    \ 1 (unsgined int; 0 if x = 0)\n__builtin_ffsll(x) // 1 + index of least significant\
    \ 1 (unsgined long long; 0 if x = 0)\n__lg(x) // index of highest set bit (unsigned\
    \ int or unsigned long long; undefined if x = 0)\n"
  code: "/*\nNext permutation of x as a bit sequence.\n\ne.g.    001011 -> 001101\n\
    \        110011 -> 110110\n*/\nusing ull = uint64_t;\null next_bits_permutation(ull\
    \ x) {\n  ull c = __builtin_ctzll(x), r = x + (1ULL << c);\n  return (r ^ x) >>\
    \ (c + 2) | r;\n}\n\n/*\nIterate over all (proper) subsets of bitset s.\ne.g.\
    \ 1101 -> {1000, 0100, 0001, 1100, 1001, 0101}\n*/\nusing ull = uint64_t;\nvoid\
    \ subsets(ull s) {\n  for (ull x = s; x;) {\n    --x &= s;\n    /* do stuff */\n\
    \  }\n}\n\n/*\nFind the low bit\n*/\nint lowbit(auto x) {\n    return x & (-x);\n\
    }\n\n/*\nGCC specific functions for bitwise operations\n\nSee: https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html\n\
    */\n__builtin_popcount(x) // popcount (unsigned int)\n__builtin_popcountll(x)\
    \ // popcount (unsigned long long)\n__builtin_ctz(x) // # of trailing zeros (unsgined\
    \ int; undefined if x = 0)\n__builtin_ctzll(x) // # of trailing zeros (unsgined\
    \ long long; undefined if x = 0)\n__builtin_clz(x) // # of leading zeros (unsgined\
    \ int; undefined if x = 0)\n__builtin_clzll(x) // # of leading zeros (unsgined\
    \ long long; undefined if x = 0)\n__builtin_ffs(x) // 1 + index of least significant\
    \ 1 (unsgined int; 0 if x = 0)\n__builtin_ffsll(x) // 1 + index of least significant\
    \ 1 (unsgined long long; 0 if x = 0)\n__lg(x) // index of highest set bit (unsigned\
    \ int or unsigned long long; undefined if x = 0)"
  dependsOn: []
  isVerificationFile: false
  path: 01_language/bit_hacks.cpp
  requiredBy: []
  timestamp: '2024-06-24 23:01:40+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: 01_language/bit_hacks.cpp
layout: document
redirect_from:
- /library/01_language/bit_hacks.cpp
- /library/01_language/bit_hacks.cpp.html
title: 01_language/bit_hacks.cpp
---
