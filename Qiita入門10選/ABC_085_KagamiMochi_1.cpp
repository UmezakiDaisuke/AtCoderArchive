#include <bits/stdc++.h>
using namespace std;

// バケットソートによる解
int main() {
  // 入力
  int N;
  int d[110];
  cin >> N;
  for (int i = 0; i < N; ++i) cin >> d[i];

  // バケット
  int num[110] = {0};
  // バケットに元配列の値を格納
  for (int i = 0; i < N; ++i) {
    num[d[i]] = d[i];
  }

  int res = 0;
  for (int i = 1; i <= 100; ++i) {
    if (num[i]) { //値が入っていればカウントアップ
       ++res;
    }
  }
  cout << res << endl;
}