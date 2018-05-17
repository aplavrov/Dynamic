const n0 = 20;
  m0 = 20;
var a : array [1..n0, 1..m0] of integer;
  dp : array [0..n0, 0..m0] of integer;
  i, j : integer;
  n, m : integer;

function min (a, b : integer) : integer;
begin
  if (a < b)
  then min := a
  else min := b;
end;

begin
  read(n); read(m);
  for i := 1 to n do
  for j := 1 to m do
    read(a[i][j]);

  for i := 0 to n do
    dp[i][0] := 32000;
  for j := 0 to m do
    dp[0][j] := 32000;

  dp[0][1] := 0; dp[1][0] := 0;

  for i := 1 to n do
  for j := 1 to m do
    dp[i][j] := min(dp[i - 1][j], dp[i][j - 1]) + a[i][j];

  writeln(dp[n][m]);

end.
