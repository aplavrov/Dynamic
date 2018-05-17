var a : array [1..45] of longint;
  i, n : integer;

begin
  a[1] := 1; a[2] := 1;
  for i := 3 to 45 do
    a[i] := a[i - 1] + a[i - 2];

  readln(n);
  writeln(a[n]);

end.
