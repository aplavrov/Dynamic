#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector <int> a(46);
  a[1] = 1; a[2] = 1;
  for (int i = 3; i <= 45; ++i)
    a[i] = a[i - 1] + a[i - 2];

  int n; cin >> n;
  cout << a[n] << endl;

  return 0;
}
