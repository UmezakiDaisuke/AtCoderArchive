#include <bits/stdc++.h>
using namespace std;

// 連想配列(set)による解
int main() {
  int N;
  int d[110];
  cin >> N;
  for (int i = 0; i < N; i++) cin >> d[i];

  // set は重複を許さない順序付きの集合なので、重複がある場合は自動的に削除される
  set<int> values; // insert する時に重複が取り除かれる
  for (int i = 0; i < N; ++i) {
    values.insert(d[i]); //挿入
  }

  // set のサイズを出力
  cout << values.size() << endl;
}