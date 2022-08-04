#include <bits/stdtr1c++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;

int main()
{
  // input
  int N, D, ans = 0;
  cin >> N >> D;

  vector<vector<int>> X(N, vector<int>(D));
  rep(i, N) rep(j, D) cin >> X[i][j];

  // solve
  // iとjをそれぞれのN点の組み合わせとし、全探索する
  rep(i, N)
  {
    repi(j, i + 1, N)
    {
      // Xの数だけ二乗誤差を足す
      int length = 0, d = 0;
      rep(k, D)
      {
        d = abs(X[i][k] - X[j][k]);
        length += d * d;
      }

      // lengthが平方数である場合はカウントする(lengthが1のパターンもあるため、+1まで余裕を持って確かめる)
      rep(l, length + 1)
      {
        if (l * l == length)
          ans++;
      }
    }
  }
  cout << ans << endl;
}