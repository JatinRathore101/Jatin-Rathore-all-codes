% To demonstrate Iterative methods, here we are using Heron's Algorithm.
% Heron's Algorithm is one of the first Iterative Numerical Algrithms.
% Was discovered in 18th centuary in Alexandria to compute sqrt(2).

% Given as:-  x(i+1) = ( x(i) + 2/x(i) )/2
% this is iteration => x(old)=x(i) , x(new)=x(i+1)

function iterative_error(x)

% x is initial guess
clc;
n_iterations=0;

while(abs(2^(1/2)-x)>0.0001)
    x=( x + 2/x )/2 %semicolon not used to echo every x over the screen.
    n_iterations=n_iterations+1;
end
disp(['number of iterations = ',num2str(n_iterations)]);


% which ever +ve Real value we give to function the answer is always
% 1.4142 , however the number of iterations involved are different and
% lowest as we aproach 1 from either side.

% avoid giving any zero{0} or any -ve Real value as it will start an
% infinite loop which can be break by Ctrl+C



