% PDE

% Consider a example of Heat transfer in a rod of length 1 unit, Initially 
% entire rod is at Ta=25 degree celcius, then rod is held at 100 degree
% celcius at one end and at Ta=25 degree celcius at other end. Now if the 
% overall temprature at any point on the rod varies according to ODE
% 
% dT/dt = alpha*((d/dt)^[2](T)) - beta*(T-Ta)  
% where alpha = 0.025 , beta = 0.1 
% 
% calculate the steady state tempratures at various points on the rod.

%%
% Let us devide the rod into 10 sections, hence we will have 11 points(2 
% at ends), the we will analyse the variation of time at these points

N=10;
T0(1,1)=100;
T0(2:N,1)=25;
T0(N+1,1)=25;

%% solving ode
tSpan=[0 20];
Y0=T0(2:N,1);

[tSol,YSol]=ode45(@(t,Y) rod_temp(t,Y) , [0 20] ,Y0 );

plot(tSol,YSol);




