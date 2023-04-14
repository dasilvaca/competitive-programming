#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  //! This was used as another approach, using the total sum, and substracting the input
  //! long long int sum = (n * (n + 1)) / 2;
  int cum = 0; //* In this variable I store the whole result of xor each number from 1 to n
  for (int i = 0; i < n ; i++){
    cum ^= (i + 1);
  }

  //* Then I apply xor again, but for each item in input
  for (int i = 0; i < n - 1; i++) {
    int k;
    cin >> k;
    cum ^= k;
  }
  
  //* The result will be the only number that was not on the input
  cout << cum << '\n';
}