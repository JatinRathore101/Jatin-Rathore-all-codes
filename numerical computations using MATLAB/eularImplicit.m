% solving ODE-IVP (ordinary differential equation-initial value problem)
% using Eular's Implicit Method
%  
% given-
% dy/dt=F(t,y) , y(t[0])=y[0] , tSpan 
% 
% Aim to find y[i]=f(t[i])

%   dy/dt=F(t,y) 
%   => lim[h->0]  (y[i+1]-y[i])/h = F(t,y)
%   => for very small h, F(t,y) at a point between y[i+1] and y[i] just 
%      equals F(t[i+1],y[i+1]) 
%   => y[i+1]=y[i]+h*F(t[i+1],y[i+1]) => y[i+1] is function of itself  


% Example question given dy/dt=-2*t*y , y[t=0]=1 , tEnd=5 find y[t[i]] and 
% error from the true value 

t0=0;
y0=1;
h=0.01;
tEnd=5;
t=[t0:h:tEnd];
N=length(t);
y=zeros(1,N);
y(1)=y0;

for i=2:N
    t(i)=t(i-1)+h;
    y_temp=fsolve(@(y_temp)  (y_temp-y(i-1)+2*h*t(i)*y_temp) , y(i-1));
    y(i)=y_temp;
    %t(i)=t_temp;
end

plot(t,y);

yTrue=exp(-t.^2);

err=max(abs(yTrue-y));

clc;
disp(['h<0.01 is so slow that it does not computes at all, the reason is '])
disp(['implicit computations are very slow'])
disp(['max error = ',num2str(err)]);


% Though implicit methods takes longer time for computation than explicit 
% methods they are "globally stable". Means for a wide variety of values 
% of h they show solution, the accuracy may be less for very small or very 
% large values of h but far better than explicit methods. 
