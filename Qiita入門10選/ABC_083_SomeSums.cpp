#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int res = 0;
  for (int n = 1; n <= N; n++) {
    // nを文字列化
    string s = to_string(n);

    //nの桁同士を足す
    int total = 0;
    for (int t = 0; t < s.length(); t++) {
      total = total + int(s[t]- '0');
    }

    // nの桁総和がA以上B未満をチェック
    if (total >= A && total <= B) {
      res = res + total;
    }
  }

  cout << res << endl;
  return 0;
}