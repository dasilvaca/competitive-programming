#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long int n;  //* As the number could grow too much, it's necessary to use
                    //* a long long
  cin >> n;

  while (n > 1) {
    cout << n << " ";
    if (n & 1) //* I use bitwise AND in order to check if its even or odd.
      n = (n * 3) + 1;
    else
      n /= 2;
  }
  cout << n << "\n";
}