% Using basic inegral concept of area under curve and approximating it
% using very small element h by sum of areas of such trepezoids with width h

%%
clc;
x1=2;
x2=3;
h=10^-2;
n=(x2-x1)/h;

% f(x)=y=x^3-exp(x)

trueval=( (x2^4)/4 - exp(x2) ) - ( (x1^4)/4 - exp(x1) );
% area of trepezium=(1/2)*(sum of parallel sides)*(distance between them)

area_trep=0;

for i=1:n
    area_trep = area_trep + ( (x1+(i)*h)^3-exp((x1+(i)*h)) + (x1+(i-1)*h)^3-exp((x1+(i-1)*h)) )*(h/2);
end

% by matrix also possible by using y matrix then sum(y matrix)*h , where y=f(x); 

err=abs(trueval-area_trep);
disp(err);