var a : array [1..101] of integer;
f : array [0..10001] of boolean;
i, k : integer;
n, m : integer;

begin
readln(n, m);
for i := 1 to n do
  read(a[i]);

f[0] := true;
for i := 1 to n do
for k := m downto a[i] do
if (f[k - a[i]])
then f[k] := true;

while (f[m] = false) do
  Dec(m);
writeln(m);

end.
