% This method is very popular because it has one of the fastest rate of
% convergence , this method converges quadratically unlike fixed point
% iteration mehod that converges linearly.

% https://youtu.be/7eHuQXMCOvA   Video on Newton Raphson method

% Newton Raphson method works on some initial guess and converges to the
% root of the expression f(x)=0 if the guess is ok The formula used for
% iteration here is xi+1= xi - f(xi)/f'(xi)

%%
% for f(x)=2-x+ln(x)  f'(x)=-1+(1/x) 
clc;
x=[0.0001,1,3,4]; %initail guess
a=x;
tol=1E-7;

for i=1:4
    j=0;
    for j=1:50
        f=2-x(i)+log(x(i));
        fdash=(1/x(i))-1;
        x(i)=x(i)-(f/fdash);
        if abs(f)<tol % => f(x) tending to zero at this x => x is approximate root
            break;
        end
    end
    if isfinite(x(i))
        if isreal(x(i))
            disp(['approximate root of f(x)=0 for initial guess ',num2str(a(i)),' is ',num2str(x(i))]);
            disp(['In ',num2str(j),' number of iterations.']);
            disp(' ');
        else
            disp(['Method failed to converge at for initial guess = ',num2str(a(i))]);
            disp(' ');
        end
    else
        disp(['Method failed to converge at for initial guess = ',num2str(a(i))]);
        disp(' ');
    end
end

disp('Method failed at x=1 as at x=1 the fdash(1)=0=1/(1)-1 so zero comes in denominator of f in first iteration');


% we can see that Newton raphson method is giving us results in relatively
% much lower number of iterations compared to other methods. Also result
% corresponding to x=1 is was not finite real number
disp(' ');
disp('Hence be remember that in Newton Raphson method we can not start');
disp('with initial guess with is either local minima or local maxima.');


% Hence be remember that in Newton Raphson method we can not start with
% initial guess with is either local minima or local maxima.