#include <bits/stdc++.h>
using namespace std;

int main () {
  string num;
  cin >> num;

  int n = 0;
  if (num[0] == '1') ++n;
  if (num[1] == '1') ++n;
  if (num[2] == '1') ++n;
  cout << n << endl;

  return 0;
}