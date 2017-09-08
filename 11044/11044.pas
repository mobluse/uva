(* @JUDGE_ID: mobluse 11044 Pascal "Closed-form expression" *)
program UVa11044(input, output);

var t, n, m, i: integer;

begin
    readln(t);
    for i := 1 to t do
    begin
        readln(n, m);
        writeln((n div 3)*(m div 3));
    end
end.
