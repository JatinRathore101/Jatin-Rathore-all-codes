% The basic hyperbolic functions are:

%     hyperbolic sine "sinh"            => sinh(x)=(exp(x)-exp(-x))/2

%     hyperbolic cosine "cosh"          => cosh(x)=(exp(x)+exp(-x))/2
% 

% from which are derived:

%     hyperbolic tangent "tanh"         => sinh(x)/cosh(x)= (exp(x)-exp(-x))/(exp(x)+exp(-x))

%     hyperbolic cosecant "cosech"      => 1/tanh(x)=cosh(x)/sinh(x)= (exp(x)+exp(-x))/(exp(x)-exp(-x)) 

%     hyperbolic secant "sech"          => 1/cosh(x)=2/(exp(x)+exp(-x))

%     hyperbolic cotangent "coth"       => 1/sinh(x)=2/(exp(x)-exp(-x))
% 

% corresponding to the derived trigonometric functions.
% 
% The inverse hyperbolic functions are:

%     area hyperbolic sine or inverse hyperbolic sine"asinh" 

%     area hyperbolic cosine or inverse hyperbolic cosine "acosh" 

%% To calculate errors in hyperbolic functions approximations 

% if x is small, x in range (-0.2,0.2) , sinh(x)=x, cosh(x)=1, tanh(x)=x
% error in this range is of order 1%
% 
% if x is large, x in range R-(-2.5,-2.5) , sinh(x)=exp(x)/2,
% cosh(x)=sinh(x)=exp(x)/2 , tanh(x)=1                          if x +ve
% sinh(x)=-exp(-x)/2 , cosh(x)=exp(-x)/2 , tanh(x)=-1           if x -ve
% {using this approximation if abs(x) larger than 1.53 then also error
% less than 10% , but range R-(-2.5,-2.5) provides best results, err of order 1 %}


%%

clc;
X=[-2.8,-0.14,-0.001,0.19,1.53,2.5,5];

err_sinh_x=zeros(1,7);
err_cosh_x=zeros(1,7);
err_tanh_x=zeros(1,7);

s=0;
c=0;
t=0;

for i=1:7
    if abs(X(i))<0.2
        s=X(i);
        c=1;
        t=X(i);
    elseif X(i)>0.95
        s=exp(X(i))/2;
        c=exp(X(i))/2;
        t=1;
    elseif X(i)<-0.95
        s=-exp(-1*X(i))/2;
        c=exp(-1*X(i))/2;
        t=-1;
    end
    err_sinh_x(i)=abs(sinh(X(i))-s);
    err_cosh_x(i)=abs(cosh(X(i))-c);
    err_tanh_x(i)=abs(tanh(X(i))-t);
end

disp('for in put values :- ');
disp(X);
disp('% error in sinh(x)');
disp(abs(100*(err_sinh_x./sinh(X))))
disp('% error in cosh(x)');
disp(abs(100*(err_cosh_x./cosh(X))))
disp('% error in tanh(x)');
disp(abs(100*(err_tanh_x./tanh(X))))
