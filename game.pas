var dp : array [0..101, 0..101] of boolean;
i, j, i0, j0, add : integer;
n, m : integer;

begin
read(n); read(m);
for i := 0 to m + 1 do
for j := 0 to n + 1 do
  dp[i][j] := true;

for i := m downto 1 do
for j := n downto 1 do
begin
  dp[i][j] := false;
  for i0 := i + 1 to m + 1 do
    if (dp[i0][j] = false)
    then dp[i][j] := true;

  for j0 := j + 1 to n + 1 do
    if (dp[i][j0] = false)
    then dp[i][j] := true;

  add := 1;
  while ((i + add <= m + 1) and (j + add <= n + 1)) do
  begin
    if (dp[i + add][j + add] = false)
    then dp[i][j] := true;
    Inc(add);
  end;
end;

if (dp[1][1] = true)
then writeln(1)
else writeln(2);

end.
