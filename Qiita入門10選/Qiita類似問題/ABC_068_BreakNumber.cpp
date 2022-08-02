#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int tmp = 0;
  int ans = 0;
  for (int i = 1; i <= n; ++i)
  {
    int calc = i;
    int cnt = 0;
    while (calc % 2 == 0)
    {
      calc /= 2;
      cnt++;
    }
    if (cnt >= tmp)
    {
      tmp = cnt;
      ans = i;
    }
  }
  cout << ans << endl;
}