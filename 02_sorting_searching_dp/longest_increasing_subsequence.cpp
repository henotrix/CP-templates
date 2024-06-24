// Modified from KACTL

template <class I> vector<I> lis(vector<I> &a) {
  if (a.empty())
    return {};
  vector<I> prev(sz(a));
  typedef pair<I, int> p;
  vector<p> res;
  for (int i = 0; i < sz(a); i++) {
    // 1. Change p{S[i], -1} -> p{S[i], INF} for longest non-decreasing
    // subsequence
    // 2. change p{S[i], -1} -> p{S[i], INF} and add greater<p>()
    // for longest decreasing subsequence
    // 3. Add greater<p>() for longest non-increasing subsequence
    auto it = lower_bound(all(res), p{a[i], -1});
    if (it == res.end())
      res.emplace_back(), it = res.end() - 1;
    *it = {a[i], i};
    prev[i] = it == res.begin() ? 0 : (it - 1)->second;
  }
  int L = sz(res), cur = res.back().second;
  vector<I> ans(L);
  while (L--)
    ans[L] = cur, cur = prev[cur];
  return ans;
}