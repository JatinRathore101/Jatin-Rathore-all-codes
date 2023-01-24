% To find first order partial derivatives of
% f(x1,x2)=x1*exp(x2)+sin(x1-2*x2) wrto x1 and wrto x2 at (x1,x2)=(0.02,3)
% Using central differentian
%%
clc;
x1=0.02;
x2=3;
h=[4e-7,3e-5]; % for x1, x2
err_deriv=[];
%% Partial derivative wrto x1
% true derivative= exp(x2)+cos(x1-2*x2)
true_deriv_x1=exp(x2)+cos(x1-2*x2);
approx_deriv_x1=( (x1+h(1))*exp(x2)+sin((x1+h(1))-2*x2) - (x1-h(1))*exp(x2)+sin((x1-h(1))-2*x2) )/2*h(1);
err_deriv(1)=abs(true_deriv_x1-approx_deriv_x1);

%% Partial derivative wrto x2
% true derivative= x1*exp(x2)-2*cos(x1-2*x2)
true_deriv_x2=x1*exp(x2)-2*cos(x1-2*x2);
approx_deriv_x2=( x1*exp((x2+h(2)))+sin(x1-2*(x2+h(2))) - x1*exp((x2-h(2)))+sin(x1-2*(x2-h(2))) )/2*h(2);
err_deriv(2)=abs(true_deriv_x2-approx_deriv_x2);
%%
disp(err_deriv);
