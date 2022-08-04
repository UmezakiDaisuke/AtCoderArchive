#include <bits/stdtr1c++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N;
  cin >> N;

  bool flg = false;
  rep(i, N)
  {
    rep(j, N)
    {
      if (N == i * 4 + j * 7)
      {
        flg = true;
      }
    }
  }
  string res = flg ? "Yes" : "No";
  cout << res << endl;
}