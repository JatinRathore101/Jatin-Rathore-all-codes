% fibonacci series using for loop
n=10;
fibo=[1,1];

for i=3:n   %no semocolon in loops initialization   
    fibo(1,i)=fibo(1,i-1)+fibo(1,i-2);
end % for loop in matlab must end with end keyword

% Be remember to use semicoclon after every statement inside the loops body

% For loop to be used when the set of operations to be repeated for a
% specific number of times, gwnwrally when the numbers of times loop
% to be executed is preknown(can be n also)(some variable number of times)

% -----------some knowledge about matlab files (.m)-------------
% Matlab files are of two types:- scripts and functions.
% scripts are files containing series of matlab commands. In scripts
% the commands are executed serially as if typed on command window
% scripts files use the same workspace as of the window that was used to
% access the script files, hence when we access the script type file
% from the command window, we are able to access the variable inside the
% script file by just typing its name in the command window, this is
% not possible with any variable inside the function.
% So, scripts files are just commands that could have been executed over
% the command window

% For example:- we have a script nFacto.m , so we will simply type nFacto
% hit enter and the value of any variable inside nFacto can be used any
% where inside the command window, untill they are updated.

% Use scripts when small calculations are needed.



