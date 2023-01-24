% Calculating e(0.1) using multiple steps of taylor series
% h is step size
% a=0.1, a/h is number of steps
% checking error in approximate e(0.1) value at different h in (0,0.1)
% We will use single term and double term taylor's series and plot two
% different graphs of log(error) vs step size ie. h,

% single term taylor's series => f(x+h)=f(x) + h*f'(x)

% two term taylor's series => f(x+h)=f(x) + h*f'(x) + (h^2/2)*f''(x)

% three term taylor's series => f(x+h)=f(x) + h*f'(x) + (h^2/2)*f''(x)
% + (h^3/6)*f''(x)


%% code

clc;
h=[0.00001,0.00005,0.0001,0.0007,0.001,0.003,0.01,0.015,0.02,0.03];
a=0.1;
errT1=ones(1,10);
errT2=ones(1,10);
errT3=ones(1,10);
k=ones(1,10);
for i=1:10
    x=0;
    
    while(a>=x+h(i))
        k(i)= exp(x)+h(i)*exp(x);
        x=x+h(i);
    end
   
    errT1(i)=exp(a)-k(i);

    x=0;
    
    while(a>=x+h(i))
        k(i)= exp(x)+h(i)*exp(x)+((h(i)^2)/2)*exp(x) ;
        x=x+h(i);
    end
    
    errT2(i)=exp(a)-k(i);

    x=0;
    
    while(a>=x+h(i))
        k(i)= exp(x)+h(i)*exp(x)+((h(i)^2)/2)*exp(x)+((h(i)^3)/6)*exp(x);
        x=x+h(i);
    end
    
    errT3(i)=exp(a)-k(i);

end

table=[h;errT1;errT2;errT3];
disp(table);

loglog(h,errT1,'r-*',h,errT2,'g*-',h,errT3,'b*-');
xlabel('log of stepsizes log(h)');
ylabel('log of errors');
legend('single term taylor series','two term taylor series','three term taylor series');


%% result -

% By increaing the number of terms used for approximation => from single
% term Taylor's Series to three term Taylor's Series we see that the
% quality of approximation increased and the error decreased => the curve
% of three term approximation shows minimum error (is below the other two)
% and vice versa.

% Graphs show that the error increases(in all the three curves) with
% increasing the stepsize from   0.00001 -> 0.00005 -> 0.0001 -> 0.0007 ->
%   0.001 -> 0.003 -> 0.01 -> 0.02
% though we found a minimas at 0.01 and 0.02  which are exceptions, maybe
% due to round-off and truncation error concept. (don't know why.)

% though I dont know the reason for exception, but for more precise view 
% run the script:-   
% stepiwse_exception_why.m








