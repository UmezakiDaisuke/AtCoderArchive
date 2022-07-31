#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int centerNum= s.size() - 2;

  cout << s.substr(0, 1) << centerNum << s.substr(s.length() -1) << endl;
}