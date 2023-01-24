% integration using trapz and quad function
% trapz(x,y) , finds integration of y=f(x) , where x is a matrix with any
% spacing equal or unequal, (generally h=(b-a)/n), x and y must have same
% number of elements. elements can repeat in both x and y.

% y=f(x) = x^2-exp(x)+1 

%%
clc;
a=2;
b=3;
x=[2:10^-2:3]; % n=number of elements(trapeziums)=100, as elements in x are 101

trueval= (b^3/3-exp(b)+b)-(a^3/3-exp(a)+a);
 
y=x.^2-exp(x)+1;
approxval=trapz(x,y);
err=abs(trueval-approxval);

