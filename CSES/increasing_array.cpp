#include <bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, prev, act;
  ll moves = 0;
  cin >> n;
  cin >> prev;
  for (int i = 0; i < n - 1; i++) {
    cin >> act;
    if (prev > act)
      //* I make the array a non descendant one, and store the moves.
      moves += (ll)((ll)prev - (ll)act);
    else
      prev = act;  //* I increase the previous biggest element if I read another
                   //* bigger
  }
  cout << moves << '\n';
}