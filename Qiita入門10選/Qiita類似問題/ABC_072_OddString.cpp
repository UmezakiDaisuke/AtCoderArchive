#include <bits/stdtr1c++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  cin >> s;

  string ans;
  rep(i, s.size())
  {
    if (i % 2 == 0)
    {
      ans += s[i];
    }
  }
  cout << ans << endl;
}