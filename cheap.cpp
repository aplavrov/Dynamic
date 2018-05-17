#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m; cin >> n >> m;
  vector <vector <int>> a(n + 1, vector <int> (m + 1));
  for (int i = 1; i <= n; ++i)
  for (int j = 1; j <= m; ++j)
    cin >> a[i][j];

  vector <vector <int>> dp(n + 1, vector <int> (m + 1, 1e9 + 7));
  dp[0][1] = 0; dp[1][0] = 0;
  for (int i = 1; i <= n; ++i)
  for (int j = 1; j <= m; ++j)
    dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + a[i][j];

  cout << dp[n][m] << endl;

  return 0;
}
