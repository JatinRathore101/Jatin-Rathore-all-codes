% Solve  dy/dt=F(t,y)=-2ty  using ode45() function

t0=0;
tEnd=10;
tSpan=[t0,tEnd];
y0=1;

% N is not required

[tSol,ySol]=ode45(@(t,y) y_Dash1(t,y),tSpan,y0);

plot(tSol,ySol);

