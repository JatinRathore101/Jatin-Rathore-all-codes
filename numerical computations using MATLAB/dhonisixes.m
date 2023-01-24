% To solve trajectary of a ball hit with initial velocity 
% uNet=35 , theta=pi/4 , initial coordinates (x0,y0)=(0,0)

uNet=50;
theta=pi/4;
x0=0;
y0=0;
u0=uNet*cos(theta);
v0=uNet*sin(theta);
tSpan=[0 7.2]; % adjust tEnd by seeing the plots, time can't be negative
Y0=[x0;y0;u0;v0];

[tSol,YSol]=ode45(@(t,Y) Helicopter_shot(t,Y),tSpan,Y0);
plot(tSol,YSol(:,2));

