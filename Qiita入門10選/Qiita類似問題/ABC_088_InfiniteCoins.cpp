#include <bits/stdc++.h>
using namespace std;

int main () {
  int N, A;
  cin >> N >> A;

  int amari = N % 500;
  string res = (amari <= A) ? "Yes" : "No";
  cout << res << endl;
}