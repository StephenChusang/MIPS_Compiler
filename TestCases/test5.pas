program test5;
var
   a, b : integer;
   ret : real;
   c: string;
   d: char;

(*function definition *)
function max(num1, num2: integer): integer;
var
   (* local variable declaration *)
   result: integer;
begin
   if (num1 > num2) then
      result := num1
   else
      result := num2;
   max := result;
end;
begin
   a := 100;
   b := 200;
  (* calling a function to get max value *)
   ret := max(a, b);
   writeln(a);
end.
