program satu;
uses crt, sysutils, strutils;
var
    fail: text;
    isifile, s: string;
    i: integer;

function cekHuruf(c: char): boolean;
begin
    case c of
        'a'..'z': cekHuruf := true;
        'A'..'Z': cekHuruf := true;
        else cekHuruf := false;
    end;
end;

function cekSpasi(c: char): boolean;
begin
    case c of
        ' ': cekSpasi := true;
        else cekSpasi := false;
    end;
end;

function cekTanda(c: char): integer;
begin
    case c of
        '!', '.', '?': cekTanda := 1;
        ',': cekTanda := 2;
        else cekTanda := 0;
    end;
end;

begin
    clrscr;

    assign(fail, 'INPUT.txt');
    {$I-}
    reset(fail);
    {$I+}
    if(IOResult <> 0) then
    begin
        rewrite(fail);
        reset(fail);
    end;
    readln(fail, isifile);

    close(fail);

    writeln(length(isifile));


    if((cekHuruf(isifile[1]))) then
    begin
        isifile[1] := upcase(isifile[1]);
    end;

    i := 1;
    while(i <= length(isifile)) do
    begin
        writeln(i, ' - ', isifile[i]);
        if(cekSpasi(isifile[i])) then
        begin
            if(cekSpasi(isifile[i-1])) then
            begin
                delete(isifile, i, 1);
                dec(i);
            end;
        end;
        inc(i);

    end;

    for i := 1 to length(isifile) do
    begin
        if(cekTanda(isifile[i]) > 0) then
        begin
            if(cekSpasi(isifile[i-1])) then delete(isifile, i-1, 1);
        end;
    end;

    for i := 2 to length(isifile) do
    begin
        if(cekHuruf(isifile[i])) then
        begin
            if(cekTanda(isifile[i-1]) > 0) then insert(' ', isifile, i);

            if(i > 2) then
            begin
                if(cekTanda(isifile[i-2]) = 1) then
                        isifile[i] := upcase(isifile[i]);
            end;
        end;
    end;

    assign(fail, 'OUTPUT.txt');
    rewrite(fail);
    writeln(fail, isifile);
    close(fail);
    readkey;
end.
