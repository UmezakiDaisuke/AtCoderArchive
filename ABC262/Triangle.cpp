#include <bits/stdc++.h>
using namespace std;

// 本番解けませんでした（以下解説のコード）
int main()
{
  int n, m;
  cin >> n >> m;

  // 隣接行列の作成
  vector<bool> adj(n, vector<bool>(n)); // 隣接行列用の二重配列宣言
  for (int i = 0; i < m; i++)
  { // 辺の数だけ繰り返し
    int u, v;
    cin >> u >> v;
    u -= 1, v -= 1;               // 配列インデックスに合わせるために-1
    adj[u][v] = adj[v][u] = true; //両パターンに true セット
  }

  int ans = 0;
  // 全探索
  for (int i = 0; i < n; ++i)
  { // 頂点の数だけ繰り返し
    for (int j = i + 1; j < n; ++j)
    { // i で出た数字はいらないので i+1
      for (int k = j + 1; k < n; k++)
      { // i,j で出た数字はいらないので j+1

        if (adj[i][j] and adj[j][k] and ajd[k][i])
        {
          ans += 1;
        }
      }
    }
    cout << ans << '\n';
    return 0;
  }
}