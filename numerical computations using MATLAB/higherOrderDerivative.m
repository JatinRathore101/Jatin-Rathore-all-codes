% Ploting error variation with h in first, second and third derivatives of
% f(x)=tan^[-1](x) at x=1, using central difference formula.
% for f0=f(x)=tan^[-1](x) , f1=f'(x)=1/(1+x^2) , f2=f''(x)=-2x/((1+x^2)^2) , f3=f'''(x)= (6*x^2-2)/((1+x^2)^3)

%%
clc;
x=1;
h=10.^[-2:-1:-7];

f1=0.5; % true value of f'(x) at x=1 for f(x)=tan^[-1](x)
f2=-0.5; % true value of f''(x) at x=1 for f(x)=tan^[-1](x)
f3=0.5; % true value of f'''(x) at x=1 for f(x)=tan^[-1](x)

approx_f1=(atan(x+h)-atan(x-h))./(2.*h); %central derivative devide by 2h not by h
err_f1=abs(f1-approx_f1);

approx_f2=(atan(x+2.*h)+atan(x-2.*h)-2*atan(x))./(4.*(h.^2)); % ( (atan(x+2h)-atan(x))/2h - (atan(x)-atan(x-2h))/2h )2h
err_f2=abs(f2-approx_f2);

approx_f3=(atan(x+3.*h)-3.*atan(x+h)+3.*atan(x-h)-atan(x-3.*h))./(8.*(h.^3)); % ( (atan(x+3h)+atan(x-h)-2atan(x+h))/4h - (atan(x+h)+atan(x-3h)-2atan(x-h))/4h )/2h
err_f3=abs(f3-approx_f3);    

loglog(h,err_f1,':*k',h,err_f2,':*r',h,err_f3,':*b');
legend('Error in first order derivative','Error in second order derivative','Error in third order derivative');

%%

% see graph from right to left not left to right
