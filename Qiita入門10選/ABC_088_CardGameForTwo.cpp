#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力処理
  int N;
  int a[110];
  cin >> N;
  for (int i = 0; i < N; ++i) cin >> a[i];

  // 配列ソート(降順)処理
  sort(a, a + N, greater<int>());
  int Alice = 0;
  int Bob = 0;

  // 2人のカードドロー処理
  for (int i = 0; i < N; ++i) {
    if (i % 2 == 0) { // ALiceのターン
      Alice += a[i];
    }
    else { // Bobのターン
      Bob += a[i];
    }
  }
  cout << Alice - Bob << endl;
}