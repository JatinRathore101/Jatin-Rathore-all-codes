% To solve mass spring system using RK-4 method and check errors from ode45
clc;
%% solving using ode45()

t0=0;
tEnd=20;
tSpan=[t0,tEnd];
Y0=[1;0];

[tSol,Ysol]=ode45(@(t,Y) massSpringFun(t,Y),tSpan,Y0);



%% Solving using RK4

h=0.1
t=[t0:h:tEnd];
N=length(t);
Y_RK=zeros(2,N);
Y_RK(:,1)=Y0;

for i=1:(N-1)
K1=massSpringFun(t(i),Y_RK(:,i));
K2=massSpringFun(t(i)+h/2,Y_RK(:,i)+(h/2)*K1);
K3=massSpringFun(t(i)+h/2,Y_RK(:,i)+(h/2)*K2);
K4=massSpringFun(t(i)+h,Y_RK(:,i)+h*K3);

Y_RK(:,i+1)=Y_RK(:,i)+(h/6)*(K1+2*K2+2*K3+K4);
end


plot(tSol,Ysol(:,1),'g',tSol,Ysol(:,2),'r',t,Y_RK(1,:),'k',t,Y_RK(2,:),'b');
legend('diplacement x by ode45','velocity v by ode45','diplacement x by RK-4','velocity v by RK-4');

% plots by ode45 and RK4 almost overlap