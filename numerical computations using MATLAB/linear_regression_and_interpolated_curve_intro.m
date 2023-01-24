clc;
% Given Data Points
x=[0.8 1.4 2.7 3.8 4.8 4.9];
y=[0.69 1.0 2.02 2.39 2.34 2.83];

% x=[1 2 3 4 5 6 7];
% y=[3 5.9 9.1 11.9 15.1 18 20.8];

%% Linear Regression

% for best fit line be y=a+bx we make equatons as
% sigma(y)=n*a+b*sigma(x) and sigma(xy)=a*sigma(x)+b*sigma(x^2) 
% then solve these equations by matrix method.
% [n sigma(x);sigma(x) sigma(x^2)][a;b]=[sigma(y);sigma(xy)]

xsq=x.^2;
xy=x.*y;
A=[length(x) sum(x);sum(x) sum(xsq)];
B=[sum(y);sum(xy)];
X=inv(A)*B;

disp(['The equation of best fitting line is => y=',num2str(X(1)),'+',num2str(X(2)),'x']);

% Alternatively lsqcurvefit() can be used
%% Interpolation using lagrange's formula

x_input=[0.8:0.01:4.9];
y_output=zeros(1,length(x_input));
y_regression=zeros(1,length(x_input));

for i=1:length(x_input)
    
    for j=1:length(x)
        z=1;
        for k=1:length(x)
            if k~=j
                z=z*((x_input(i)-x(k))/(x(j)-x(k)));
            end
        end
            z=z*y(j);
            y_output(i)=y_output(i)+z;
    end
    y_regression(i)=X(1)+X(2)*x_input(i);
end

plot(x_input,y_output,':b',x_input,y_regression,'-',x,y,'*');
legend('Interpolated curve','Regression','Given points');

% Alternativey we can do interpolation by Newton's devided difference
% formula instead of Lagrange's formula