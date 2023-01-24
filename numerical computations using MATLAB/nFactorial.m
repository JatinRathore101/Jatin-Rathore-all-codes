function [facto]= nFactorial(n)
facto=prod(1:n);
end

% -----------some knowledge about matlab files (.m)-------------
%  Matlab files are of two types:- scripts and functions.

%    scripts are files containing series of matlab commands. In scripts
%    the commands are executed serially as if typed on command window

%    Functions are the Files that take certain input(s), execute sequence
%    of steps, and returns output(s) at the end. Matlab statements are 
%    executed in function's own variable space, the variables created
%    and used within the function ( even the input output variables ) have
%    no scope in the command window => the don't show up in the command
%    workspace. Function type files start with special syntax, and ends
%    with end keyword, all statements inside function body must end with
%    a semicolom (;). Moreover a function file is always saved
%    as function_name.m 

%    function [output1,output2,....]=function_name(input1,input2,.....)
%    ....;
%    ....;
%    ....;
%    ....;
%    end

%  here both input and output variables are optional 
%  without output variables// function function_name(input1,input2,.....)
%  without input variables// function [output1,output2,....]=function_name
%  No input and no output variables// function function_name
%  while for the third type we don't need a function, instead we need a script

