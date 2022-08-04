#include <bits/stdtr1c++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N;
  cin >> N;
  bool flg = false;

  rep(i, 9)
  {
    rep(j, 9)
    {
      if (N == (i + 1) * (j + 1))
      {
        flg = true;
      }
    }
  }
  string res = flg ? "Yes" : "No";
  cout << res << endl;
}