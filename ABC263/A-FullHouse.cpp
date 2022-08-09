#include <bits/stdtr1c++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
using namespace std;

int main()
{
  vector<int> a(5);
  rep(i, 5) cin >> a[i];

  sort(a.begin(), a.end());

  if (a[0] == a[2] && a[3] == a[4])
    cout << "Yes" << endl;
  else if (a[0] == a[1] && a[2] == a[4])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}