#include <bits/stdtr1c++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;

int main()
{
  string s;
  cin >> s;
  if (s[0] != s[1] && s[0] != s[2])
  {
    cout << s[0] << endl;
  }
  else if (s[1] != s[0] && s[1] != s[2])
  {
    cout << s[1] << endl;
  }
  else if (s[2] != s[0] && s[2] != s[1])
  {
    cout << s[2] << endl;
  }
  else
  {
    cout << "-1" << endl;
  }
}

// 別解
int main()
{
  string s;
  cin >> s;
  map<char, int> mp;
  for (auto &nx : s)
  {
    mp[nx]++;
  }

  // solve
  for (char i = 'a'; i <= 'z'; i++)
  {
    if (mp[i] == 1)
    {
      cout << i << "\n";
      return 0;
    }
  }
  cout << "-1\n";
}