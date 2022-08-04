#include <bits/stdtr1c++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N, X, m[100000];
  cin >> N >> X;

  int nokoriX = X;
  int minm = 0;
  int ans = 0;
  rep(i, N)
  {
    cin >> m[i];
    if (i == 0)
    {
      minm = m[i];
    }

    // ドーナツ１個ずつ作る
    if (nokoriX >= m[i])
    {
      nokoriX -= m[i];
      ans = ans + 1;
    }

    // 一番g数が少ないドーナツのg数をセット
    if (minm > m[i])
    {
      minm = m[i];
    }
  }
  cout << ans + nokoriX / minm << endl;
}