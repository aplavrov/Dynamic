#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m; cin >> n >> m;
  vector <int> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];

  vector <bool> f(m + 1);
  f[0] = true;

  for (int i = 0; i < n; ++i)
  for (int k = m; k >= a[i]; --k)
  if (f[k - a[i]]) f[k] = true;

  while (!f[m]) --m;
  cout << m << endl;

  return 0;
}
