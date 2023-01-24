% Common strategy in solving non linear equation is, that we start with
% some initial guesses.
% A linear equations set either have single solution or infine solutions
% however non linear equations may have multiple finite solutions.
%
% Methods to solve non linear equations 
% Braketing Methods
%   -Bisection Method
%   -Regula Falsi
% Open Methods
%   -Secant Method
%   -Iteration Method
%   -Newton Raphson
%    Also MatLab functions using fzero() and fsolve()

% https://youtu.be/AdMiKJgeS9s  video on   difference between linear and non linear equations
% 
% https://youtu.be/3j0c_FhOt5U   video on Bisection Method for non linear equations

%% Bisection Method
% Solving for f(x)=0 , Guess 2 values x1 and x2 which may be near the root
% such that they have opposite signs(atleast one real root between
% them: odd number of real roots between them) 

% for f(x)=2-x+ln(x)  find real root of f(x)

clc;

x1=3;
x2=4;
root=0;
tol=0.000001;

for i=1:50
    xm=(x1+x2)/2;
    f1=2-x1+log(x1);
    f2=2-x2+log(x2);
    fm=2-xm+log(xm);
    
%     ln does not exist in MATLAB log Natural logarithm.
%     log(X) is the natural logarithm of the elements of X.
%     Complex results are produced if X is not positive.


    if abs(fm)<tol
        disp([num2str(fm),' f(x) approximate value of x is tending to zero => breaking here ']);
        root=xm;
        break;
    else
        if (fm*f2<0)
            x1=xm;
        else
            x2=xm;
        end
    end
    root=xm;
    disp(['Iteration number ',num2str(i),' approximate value ',num2str(root)]);
    disp(' ');
end

disp(['root=',num2str(root)]);

% next we will use in build function in matlab fzero() to calculate root
% (it uses bisection method);



