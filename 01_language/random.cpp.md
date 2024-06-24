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
    - https://en.cppreference.com/w/cpp/numeric/random/mersenne_twister_engine
    - https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
  bundledCode: "#line 1 \"01_language/random.cpp\"\n#ifdef __unix__\nrandom_device\
    \ rd;\nmt19937_64 rng(rd());\n#else\nconst auto SEED = chrono::high_resolution_clock::now()\n\
    \                  .time_since_epoch()\n                  .count();\nmt19937_64\
    \ rng(SEED);\n#endif\n/* \nTo generate a random uint_fast64_t (uint64_t) with\
    \ above code:\nuint64_t x = rng();\n\nTo generate uniform random of type T (int,\
    \ double, ...) in [l, r]:\nuniform_int_distribution<T> dist(l, r);\nauto x = dist(rng);\n\
    \nSee the following sources:\nhttps://en.cppreference.com/w/cpp/numeric/random/mersenne_twister_engine\n\
    https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution\n*/\n"
  code: "#ifdef __unix__\nrandom_device rd;\nmt19937_64 rng(rd());\n#else\nconst auto\
    \ SEED = chrono::high_resolution_clock::now()\n                  .time_since_epoch()\n\
    \                  .count();\nmt19937_64 rng(SEED);\n#endif\n/* \nTo generate\
    \ a random uint_fast64_t (uint64_t) with above code:\nuint64_t x = rng();\n\n\
    To generate uniform random of type T (int, double, ...) in [l, r]:\nuniform_int_distribution<T>\
    \ dist(l, r);\nauto x = dist(rng);\n\nSee the following sources:\nhttps://en.cppreference.com/w/cpp/numeric/random/mersenne_twister_engine\n\
    https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution\n*/"
  dependsOn: []
  isVerificationFile: false
  path: 01_language/random.cpp
  requiredBy: []
  timestamp: '2024-06-24 18:48:01+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: 01_language/random.cpp
layout: document
redirect_from:
- /library/01_language/random.cpp
- /library/01_language/random.cpp.html
title: 01_language/random.cpp
---
