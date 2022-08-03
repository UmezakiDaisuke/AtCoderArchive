#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A{N};

  int min = 0;
  int max = 0;
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
    // 初期化処理
    if (i == 0)
    {
      min = max = A[i];
      continue;
    }

    if (A[i] < min) // 最小値と比較
    {
      min = A[i];
    }
    else if (A[i] > max) // 最大値と比較
    {
      max = A[i];
    }
  }
  cout << max - min << endl;
}