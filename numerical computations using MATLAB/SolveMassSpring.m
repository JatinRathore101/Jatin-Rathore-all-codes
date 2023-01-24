% Model for a damped spring-mass system
% m((d/dt)^[2](x)) + c(dx/dt) + kx = 0
% 
% initial condition : system is stationary => x(0)=1
% 
% Steps to solve 
% -> convert equation in to number of first order ODEs
% -> dx/dt = v          , x(0)=1
% -> m(dv/dt)+cv+kx=0   , v(0)=0 (given: system is stationary)
% 
% 
% Y=[x;v]
% 
% => dY/dt = [dx/dt;dv/dt] = [v;-(cv+kx)/m]
% 
% solve just like previous cases using ode45 just remember Y is now a 
% vector of size 2.

%% solving using ode45()

t0=0;
tEnd=30;
tSpan=[t0,tEnd];
Y0=[1;0];

[tSol,Ysol]=ode45(@(t,Y) massSpringFun(t,Y),tSpan,Y0);

plot(tSol,Ysol(:,1),tSol,Ysol(:,2));
legend('diplacement x','velocity v');


