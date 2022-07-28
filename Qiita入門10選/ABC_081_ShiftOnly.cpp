#include <bits/stdc++.h>
using namespace std;

int N;
int A[210];

int main()  {
  cin >> N;
  for (int i = 0; i < N; ++i) cin >> A[i];

  int res = 0;

  // 奇数が出るまで繰り返し処理
  while (true) {
    // 奇数チェック
    bool exist_odd = false;
    for (int i = 0; i < N; ++i) {
      if ( A[i] % 2 != 0) exist_odd = true;
    }

    if (exist_odd) break; // 奇数ならループ終了

    // 実際の操作
    for (int i = 0; i < N; ++i) {
      A[i] /= 2;
    }
    ++res;
  }

  cout << res << endl;
}