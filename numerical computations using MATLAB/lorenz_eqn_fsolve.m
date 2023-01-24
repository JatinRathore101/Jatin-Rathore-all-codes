% Lorenz Equation
% First ever example to demonstrate "chaos"
% Observed by Edward Lorenz for atmospheric convention

%%
clc;
% Find steady state solution for  x-y=0  ,  2x-xz-y=0  ,  xy-3z=0  

% Defining a function Lorenzoeq() for this:-
X0=[1 1 1]; % initial guess
disp(fsolve(@(X) Lorenzoeq(X), X0));
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');

% since Lorenz equations have 3 set of solutions changing X0 for other
% solutions.

X0=[-1 -1 1];
disp(fsolve(@(X) Lorenzoeq(X), X0));
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');


X0=[-1 -1 0];
disp(fsolve(@(X) Lorenzoeq(X), X0));
disp('of order of 1E-7 => Tending to zero')
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');