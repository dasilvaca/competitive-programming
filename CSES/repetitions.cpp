#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string in;
  cin >> in;
  int l = 0, r = 0, max_diff = 1;
  for (; r < in.size(); r++) {
    if (in[l] != in[r]) {
      l = r;
    }
    if ((r - l) + 1 > max_diff) max_diff = (r - l) + 1;
  };
  cout << max_diff << '\n';
}