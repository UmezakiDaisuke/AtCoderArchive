#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  // あまりを切り上げる計算式
  // (全体の数 + グループごとの数 - 1) / グループごとの数
  int res =  (N + 2 - 1) /2;
  cout << res << endl;
}