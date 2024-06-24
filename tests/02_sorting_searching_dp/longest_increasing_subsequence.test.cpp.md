---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: 00_default/default.cpp
    title: 00_default/default.cpp
  - icon: ':heavy_check_mark:'
    path: 02_sorting_searching_dp/longest_increasing_subsequence.cpp
    title: 02_sorting_searching_dp/longest_increasing_subsequence.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/longest_increasing_subsequence
    links:
    - https://judge.yosupo.jp/problem/longest_increasing_subsequence
  bundledCode: "#line 1 \"tests/02_sorting_searching_dp/longest_increasing_subsequence.test.cpp\"\
    \n#define PROBLEM \"https://judge.yosupo.jp/problem/longest_increasing_subsequence\"\
    \n\n#line 1 \"00_default/default.cpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\ntypedef long long ll;\ntypedef pair<int, int> pii;\nconstexpr int MAXN\
    \ = 1e6 + 7;\nconstexpr int INF = 2e9;\nconstexpr ll INFF = 1e18;\nconstexpr ll\
    \ MOD = 998244353;\n#define mkp make_pair\n#define F first\n#define S second\n\
    #define pb emplace_back\n#define sz(v) ((int)(v).size())\n#define all(v) (v).begin(),\
    \ (v).end()\n#line 1 \"02_sorting_searching_dp/longest_increasing_subsequence.cpp\"\
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
    \ = cur, cur = prev[cur];\n  return ans;\n}\n#line 5 \"tests/02_sorting_searching_dp/longest_increasing_subsequence.test.cpp\"\
    \n\nint main() {\n  ios::sync_with_stdio(0);\n  cin.tie(0);\n  int n;\n  cin >>\
    \ n;\n  vector<int> a(n);\n  for (auto &i : a)\n    cin >> i;\n  auto l = lis<int>(a);\n\
    \  cout << sz(l) << '\\n';\n  for (int i : l)\n    cout << i << ' ';\n  cout <<\
    \ '\\n';\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/longest_increasing_subsequence\"\
    \n\n#include \"../../00_default/default.cpp\"\n#include \"../../02_sorting_searching_dp/longest_increasing_subsequence.cpp\"\
    \n\nint main() {\n  ios::sync_with_stdio(0);\n  cin.tie(0);\n  int n;\n  cin >>\
    \ n;\n  vector<int> a(n);\n  for (auto &i : a)\n    cin >> i;\n  auto l = lis<int>(a);\n\
    \  cout << sz(l) << '\\n';\n  for (int i : l)\n    cout << i << ' ';\n  cout <<\
    \ '\\n';\n}"
  dependsOn:
  - 00_default/default.cpp
  - 02_sorting_searching_dp/longest_increasing_subsequence.cpp
  isVerificationFile: true
  path: tests/02_sorting_searching_dp/longest_increasing_subsequence.test.cpp
  requiredBy: []
  timestamp: '2024-06-24 23:25:23+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: tests/02_sorting_searching_dp/longest_increasing_subsequence.test.cpp
layout: document
redirect_from:
- /verify/tests/02_sorting_searching_dp/longest_increasing_subsequence.test.cpp
- /verify/tests/02_sorting_searching_dp/longest_increasing_subsequence.test.cpp.html
title: tests/02_sorting_searching_dp/longest_increasing_subsequence.test.cpp
---
