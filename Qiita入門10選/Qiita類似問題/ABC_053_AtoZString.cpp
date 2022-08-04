#include <bits/stdtr1c++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  string s;
  cin >> s;
  int start, end, ans;
  bool setA = false;

  rep(i, s.size())
  {
    if (setA == false and s[i] == 'A')
    {
      start = i;
      setA = true;
    }
    if (s[i] == 'Z')
    {
      end = i;
    }
  }
  cout << end - start + 1 << endl;
}