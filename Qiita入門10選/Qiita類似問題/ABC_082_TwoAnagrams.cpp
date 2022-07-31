#include <bits/stdc++.h>
using namespace std;

int main () {
  string s, t;
  cin >> s >> t;

  // sをアルファベット順で、tを逆から並べ変える
  sort(s.begin(), s.end());
  sort(t.rbegin(), t.rend());

  if (s < t) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}