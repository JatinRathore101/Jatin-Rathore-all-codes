%%
clc;
x1=2;
x2=3;
h=10^-4;
% y=f(x)=x^3-exp(x);
trueval=( (x2^4)/4 - exp(x2) ) - ( (x1^4)/4 - exp(x1) );
x=[x1:h:x2];
y=x.^3-exp(x);
integ_of_y=h*(sum(y)-(h/2)*(x1^3-exp(x1)+x2^3-exp(x2)) );
err=abs(trueval-integ_of_y);