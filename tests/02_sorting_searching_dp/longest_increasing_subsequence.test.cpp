#define PROBLEM "https://judge.yosupo.jp/problem/longest_increasing_subsequence"

#include "../../00_default/default.cpp"
#include "../../02_sorting_searching_dp/longest_increasing_subsequence.cpp"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &i : a)
    cin >> i;
  auto l = lis<int>(a);
  cout << sz(l) << '\n';
  for (int i : l)
    cout << i << ' ';
  cout << '\n';
}