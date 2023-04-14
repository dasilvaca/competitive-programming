#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  // long long int sum = (n * (n + 1)) / 2;
  int cum = 0;
  for (int i = 0; i < n ; i++){
    cum ^= (i + 1);
  }

  for (int i = 0; i < n - 1; i++) {
    int k;
    cin >> k;
    cum ^= k;
  }

  cout << cum << '\n';
}