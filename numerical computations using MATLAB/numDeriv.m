% Numerical differentiation [direct methods]

% For small h [ h<<x ]
% => f'(x)=(f(x+h)-f(x))/h

% Taylor's series
% f(x+h) = f(x) + h*f'(x) + ((h^2)/2)f''(x) + ((h^3)/3)f'''(x) +
% ((h^4)/)f^['4](x) + ........... 
% this series implies an approximation
% => f'(x)=(f(x+h)-f(x))/h + [(h/2)f''(q)] 
% here [(h/2)f''(q)] = 0 = 0*(h)


% let us illustrate error exmaple using direct
% algorithm f'(x)=(f(x+h)-f(x))/h
% calculating error in approximation of f(x)=1/(1+x^2)=p'(x)
% => p(x)=tan^-1(x)   or   p(x)=atan(x)
% by approximation f(x)=(p(x+h)-p(x))/h

h1_powers=[1:7];
h2_powers=[2:2:14];
h1=10.^(-h1_powers);
h2=10.^(-h2_powers);
x=1;
true_val=1/(1+x^2);
err1=[];
err2=[];
for i=1:7
    err1(i)=abs( true_val  -  (atan(x+h1(i))-atan(x))/h1(i) );
    err2(i)=abs( true_val  -  (atan(x+h2(i))-atan(x))/h2(i) );
end
plot([1:7],log(err1),'b*-.',[1:7],log(err2),'r*--');
hold on
xlabel('-(powers of h1)  &  -((powers of h2)/2)');
ylabel('order of error (taken in log for better significant graph)');
legend('-(powers of h1) vs log(err1)','-((powers of h2)/2) vs log(err2)');

clc;
disp('Result');
disp(' ');
disp('In case of h1=[0.1,0.01,....,10^-7] we saw error decreases with');
disp('decreasing h1(approximation factor)');
disp(' ');
disp('In case of h1=[0.01,0.0001,....,10^-14] we saw error decreases');
disp('with decreasing h2(approximation factor) to a certain limit but');
disp('than the error increases, this is because due to machine precision');
disp('after a certain low value of h2 then the round-off error takes');
disp('over truncation error');





 
% In case of h1=[0.1,0.01,....,10^-7] we saw error decreases with
% decreasing h1(approximation factor)
 
% In case of h1=[0.01,0.0001,....,10^-14] we saw error decreases with
% decreasing h2(approximation factor) to a certain limit but than th
% e error increases, this is because due to machine precision after a
% certain low value of h2 then the round-off error takes over truncation
% error

% till the linear curve we notice error(s) changes by same order as that of
% h(s), This is the meaning of order of accuracy of any numerical method.

% Basically this script has used direct method ( An algorithm is
% directly used to compute the result directy, ex: McLaurin series
% Algorithm, Numerical Derivative Algorithm. ) 

% Next we will see error demonstration by iterative method.




