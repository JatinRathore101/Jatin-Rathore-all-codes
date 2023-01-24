function [y]= funcsum(n,x)

%calaculating expression y= C0 + C1x + C2x^2 + C3x^3 + C4x^4 + ... + Cnx^n

% C0=1, Ck=1/k for k in {1,2,3,.....,n}

vec=[1:n];

coeff=[1,1./vec];    %   ./   dot devide makes devision by operation on every matrix element and result is a matrix

xmat=[1,x.^vec];    % similar to above (remember doted operators)

%dotted operators give matrix as result

y=coeff*xmat';

end


% We use functions when you want to calculate value(s0 as a function of
% variable(s) 

% Displaying on the screen--------

%       variabes will echo(auto display) if commands
%       not terminated with semicolon(;)

%       other option is disp() function.
%       ex:- disp(A) where A is any matrix or variable etc ,
%       disp('Hello world') , disp([num2str(9),' months'])
%       disp() takes only and only single argument(input) at a time.

%       Using fprintf() , an advanced display function.

