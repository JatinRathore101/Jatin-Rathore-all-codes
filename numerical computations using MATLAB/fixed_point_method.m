% Fixed point method or method of sussive substitution
% in this method we convert f(x)=0 in the form x=g(x), and we start with
% some initial guess x1, then we iteratively keep substitution value of
% xi-1 into function xi
% f(x)=0=x-g(x) , where g(x) may not be unique
% for exmaple  f(x)=2-x+ln(x)=0  is equivalent to x=ln(x)+2 or x=exp(x-2)
% However this method is not guaranteed to converge

% Fixed point method has linear rate of convergence error in (i+1)th  step
% is of same order of magnitude to error in (i)th step

%%
clc;
x=[0.0001,1,3,4]; %initail guess
y=x;
a=x;
j=0;
k=0;
for i=1:4
    xold=0;
    yold=0;
    for j=1:50

        x(i)=log(x(i))+2;
        errx=(abs(xold-x(i)));
       
        if  errx<0.0000001
            break;
        end
        xold=x(i);

    end
    

    for k=1:50

      
        y(i)=exp(y(i)-2);
        erry=(abs(yold-y(i)));

        if  erry<0.0000001
            break;
        end
        yold=y(i);

    end
        
    if isfinite(x(i))
        if isreal(x(i))
            disp(['approximate value of   f(x)=0   for   x=ln(x)+2   with initial guess ',num2str(a(i)),' and number of iterations ',num2str(j),' is ',num2str(x(i))]);
        else
            disp(['method failed to approximate value of   f(X)=0   for   x=ln(x)+2   with initial guess ',num2str(a(i))]);
        end
    else
        disp(['method failed to approximate value of   f(X)=0   for   x=ln(x)+2   with initial guess ',num2str(a(i))]);
    end

    disp(' ');

    if isfinite(y(i))
        if isreal(y(i))
            disp(['approximate value of   f(y)=0   for   y=exp(y-2)   with initial guess ',num2str(a(i)),' and number of iterations ',num2str(j),' is ',num2str(y(i))]);
        else
            disp(['method failed to approximate value of   f(y)=0   for   y=exp(y-2)   with initial guess ',num2str(a(i))]);
        end
    else
        disp(['method failed to approximate value of   f(y)=0   for   y=exp(y-2)   with initial guess ',num2str(a(i))]);
    end

    disp(' ');
end
disp('method may not converge and may give NaN or infinity as answer, in that case we mwy look other methods')

