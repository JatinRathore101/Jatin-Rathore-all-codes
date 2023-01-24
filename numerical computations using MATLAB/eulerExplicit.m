clc;
% solving ODE-IVP (ordinary differential equation-initial value problem)
% using Eular's Explicit Method
%  
% given-
% dy/dt=F(t,y) , y(t[0])=y[0] , tSpan 
% 
% Aim to find y[i]=f(t[i])

%   dy/dt=F(t,y) 
%   => lim[h->0]  (y[i+1]-y[i])/h = F(t,y)
%   => for very small h, F(t,y) at a point between y[i+1] and y[i] just 
%      equals F(t[i],y[i]) 
%   => y[i+1]=y[i]+h*F(t[i],y[i])  


% Example question given dy/dt=-2*t*y , y[t=0]=1 , tEnd=5 find y[t[i]] and 
% error from the true value 

t0=0;
y0=1;
h=0.1;
tEnd=5;
t=[t0:h:tEnd];
N=length(t);
y=zeros(1,N);
y(1)=y0;

for i=2:N
    y(i)=y(i-1)+h*y_Dash1(t(i-1),y(i-1));
end

plot(t,y);

yTrue=exp(-t.^2);

err=max(abs(yTrue-y));

disp(['max error = ',num2str(err)]);


