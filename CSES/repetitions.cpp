#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string in;
  cin >> in;
  //* I used a double pointer approach. One on the left of the string and
  //* another at the right.
  int l = 0, r = 0, max_diff = 1;
  //* max_diff starts on 1, because, at least, if the string is not empty, and
  //*every character on it is different, the largest subsequence will be of
  //*length 1 (the same character)

  for (; r < in.size(); r++) {
    //* If the character at the beginning of the substring doesn't match
    //* with the one at the end, I discard that subsequence, and advance with
    //* the next.
    if (in[l] != in[r]) {
      l = r;
    }
    //* I calculate the length of the subsequence evaluated, and update
    //* max_length accordingly.
    if ((r - l) + 1 > max_diff) max_diff = (r - l) + 1;
  };

  //* output the length of the largest common subsequence.
  cout << max_diff << '\n';
}