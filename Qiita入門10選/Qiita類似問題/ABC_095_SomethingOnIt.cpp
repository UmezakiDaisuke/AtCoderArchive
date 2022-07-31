#include <bits/stdc++.h>
using namespace std;

int main () {
  string S;
  cin >> S;

  int total = 700;
  if (S[0] == 'o') total += 100;
  if (S[1] == 'o') total += 100;
  if (S[2] == 'o') total += 100;

  cout << total << endl;
}