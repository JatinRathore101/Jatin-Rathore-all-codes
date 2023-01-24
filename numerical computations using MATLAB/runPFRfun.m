% Plug flow reacter
% Concentration along a pfr is given by dC/dV = -(C^1.25)/2
% solve to find c for reacter volumes of 1, 5 and 10 liters.

v0=0;
v=[v0,1,5,10];
C0=1;

[vSol,CSol]=ode45(@(C,v) PFRfun(C,v) , v , C0);
plot(vSol,CSol,':ok');