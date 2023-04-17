#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  if (n <= 3 && n > 1) //! The only cases where is impossible ara when n == 2 or n == 3
    cout << "NO SOLUTION\n";
  else {
    //! Out in descendant order every even number from 2 to n
    for (int i = 2; i <= n; i += 2) {
      cout<<i<<' ';
    }
    //! Out in descendant order every odd number from 2 to n
    for (int i = 1; i <= n; i += 2) {
      cout<<i;
      //! Verifies if an space must be after the last number
      if ((i != n && i != n - 1)) cout<<' ';
    }
    cout <<"\n";
  }
}