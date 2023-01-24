function fErr = lsq_fun(phi)

% data
t=[10 20 30 40 50];
r=[0.29 0.22 0.18 0.15 0.13];

% get parameters
a=phi(1);
b=phi(2);
% compute the error
rModel=a./(b+t);
fErr=r-rModel;
end