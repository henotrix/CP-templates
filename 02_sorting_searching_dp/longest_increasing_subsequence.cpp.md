---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: tests/02_sorting_searching_dp/longest_increasing_subsequence.test.cpp
    title: tests/02_sorting_searching_dp/longest_increasing_subsequence.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"02_sorting_searching_dp/longest_increasing_subsequence.cpp\"\
    \n// Modified from KACTL\n\ntemplate <class I> vector<I> lis(vector<I> &a) {\n\
    \  if (a.empty())\n    return {};\n  vector<I> prev(sz(a));\n  typedef pair<I,\
    \ int> p;\n  vector<p> res;\n  for (int i = 0; i < sz(a); i++) {\n    // 1. Change\
    \ p{S[i], -1} -> p{S[i], INF} for longest non-decreasing\n    // subsequence\n\
    \    // 2. change p{S[i], -1} -> p{S[i], INF} and add greater<p>()\n    // for\
    \ longest decreasing subsequence\n    // 3. Add greater<p>() for longest non-increasing\
    \ subsequence\n    auto it = lower_bound(all(res), p{a[i], -1});\n    if (it ==\
    \ res.end())\n      res.emplace_back(), it = res.end() - 1;\n    *it = {a[i],\
    \ i};\n    prev[i] = it == res.begin() ? 0 : (it - 1)->second;\n  }\n  int L =\
    \ sz(res), cur = res.back().second;\n  vector<I> ans(L);\n  while (L--)\n    ans[L]\
    \ = cur, cur = prev[cur];\n  return ans;\n}\n"
  code: "// Modified from KACTL\n\ntemplate <class I> vector<I> lis(vector<I> &a)\
    \ {\n  if (a.empty())\n    return {};\n  vector<I> prev(sz(a));\n  typedef pair<I,\
    \ int> p;\n  vector<p> res;\n  for (int i = 0; i < sz(a); i++) {\n    // 1. Change\
    \ p{S[i], -1} -> p{S[i], INF} for longest non-decreasing\n    // subsequence\n\
    \    // 2. change p{S[i], -1} -> p{S[i], INF} and add greater<p>()\n    // for\
    \ longest decreasing subsequence\n    // 3. Add greater<p>() for longest non-increasing\
    \ subsequence\n    auto it = lower_bound(all(res), p{a[i], -1});\n    if (it ==\
    \ res.end())\n      res.emplace_back(), it = res.end() - 1;\n    *it = {a[i],\
    \ i};\n    prev[i] = it == res.begin() ? 0 : (it - 1)->second;\n  }\n  int L =\
    \ sz(res), cur = res.back().second;\n  vector<I> ans(L);\n  while (L--)\n    ans[L]\
    \ = cur, cur = prev[cur];\n  return ans;\n}"
  dependsOn: []
  isVerificationFile: false
  path: 02_sorting_searching_dp/longest_increasing_subsequence.cpp
  requiredBy: []
  timestamp: '2024-06-24 23:25:23+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - tests/02_sorting_searching_dp/longest_increasing_subsequence.test.cpp
documentation_of: 02_sorting_searching_dp/longest_increasing_subsequence.cpp
layout: document
redirect_from:
- /library/02_sorting_searching_dp/longest_increasing_subsequence.cpp
- /library/02_sorting_searching_dp/longest_increasing_subsequence.cpp.html
title: 02_sorting_searching_dp/longest_increasing_subsequence.cpp
---
