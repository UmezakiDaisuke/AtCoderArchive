#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, T, A, H[1010];
  cin >> N >> T >> A;

  int ans = 0;
  double ABS = 0;
  for (int i = 0; i < N; ++i)
  {
    cin >> H[i];

    // 温度計算
    double tmpt = T - H[i] * 0.006;

    // ABS（目標値との絶対値差分）を比較
    if (i == 0 or abs(tmpt - A) <= ABS)
    {
      ABS = abs(tmpt - A); // Aとの差分（絶対値）を計算
      ans = i + 1;
    }
  }
  cout << ans << endl;
}