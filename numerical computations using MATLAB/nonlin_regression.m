clc;
% using non linear regression to fit a model of the form r=a/(b+t) to the
% following data t=[10 20 30 40 50] and r=[0.29 0.22 0.18 0.15 0.13]

% for solving using lsqnonlin()

phi0=[1;1];
phi = lsqnonlin(@(P) lsq_fun(P),[10;10]);