#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m; cin >> n >> m;
  vector <vector <bool>> dp(m + 2, vector <bool> (n + 2, true));
  for (int i = m; i >= 1; --i)
  for (int j = n; j >= 1; --j) {
    dp[i][j] = false;
    for (int i0 = i + 1; i0 <= m + 1; ++i0)
      if (!dp[i0][j]) dp[i][j] = true;

    for (int j0 = j + 1; j0 <= n + 1; ++j0)
      if (!dp[i][j0]) dp[i][j] = true;

    int add = 1;
    while (i + add <= m + 1 && j + add <= n + 1) {
      if (!dp[i + add][j + add]) dp[i][j] = true;
      ++add;
    }
  }

  if (dp[1][1])
  cout << 1 << endl;
  else cout << 2 << endl;

  return 0;
}
