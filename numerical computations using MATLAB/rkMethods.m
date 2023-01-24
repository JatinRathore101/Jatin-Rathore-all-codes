clc;
% Runge-Kutta family of methods
% 
% As we seen earlier Euler's explicit method  y[i+1] = y[i] + h*F[i]
% 
% for Runge-Kutta family the general formula is  y[i+1] = y[i] + h*S[i]
% Where S[i] = w[1]*k[1] + w[2]*k[2] + .....+ w[n-1]*k[n-1] + w[n]*k[n] , 
% is the slope of n-th order ERunge Kutta method    
% 
% RK1 method (Eular's explicit method)
% y[i+1] = y[i] + h*K1
% where K1=F(t[i],y[i]);
% 
% RK2 method (Heun's method)
% y[i+1] = y[i] + (h/2)*(K1+K2)
% where K1=F(t[i],y[i]) , K2=F(t[i]+h,y[i]+h*K1)
% 
% RK3 method 
% y[i+1] = y[i] + (h/6)*(K1+4*k2+K3)
% where K1=F(t[i],y[i]) , K2=F(t[i]+h/2,y[i]+(h/2)*K1) , K3=F(t[i]+h,y[i]-h*K1+2*h*K2)
% 
% RK4 method
% y[i+1] = y[i] + (h/6)*(K1+2*k2+2*K3+K4)
% where K1=F(t[i],y[i]) , K2=F(t[i]+h/2,y[i]+(h/2)*K1) , K3=F(t[i]+h/2,y[i]+(h/2)*K2) , K4=(t[i]+h,y[i]+h*K3)
% 
% Midpoint method
% Y[i+1]=y[i]+h*K2 // K1 not used directly in midpoint formula
% K1=F(t[i],y[i]) , K2=F(t[i]+h/2,y[i]+(h/2)*K1)

%%
t0=0;
tEnd=10;
h=0.1;
y0=1;

%%
t=[t0:h:tEnd];
N=length(t);
y=t.*0;
y(1)=y0;
y_Eular=y;
y_Heun=y;
y_RK3=y;
y_RK4=y;
y_MdPt=y;

%% Euler's explicit method

for i=1:(N-1)
    K1_Eular=y_Dash1(t(i),y_Eular(i));
    y_Eular(i+1)=y_Eular(i)+h*K1_Eular;
end

%% Heun's method

for i=1:(N-1)
    K1_Heun=y_Dash1(t(i),y_Heun(i));
    K2_Heun=y_Dash1(t(i)+h,y_Heun(i)+h*K1_Heun);
    y_Heun(i+1)=y_Heun(i)+(h/2)*(K1_Heun+K2_Heun);
end

%% RK-3 method

for i=1:(N-1)
    K1_RK3=y_Dash1(t(i),y_RK3(i));
    K2_RK3=y_Dash1(t(i)+h/2,y_RK3(i)+(h/2)*K1_RK3);
    K3_RK3=y_Dash1(t(i)+h,y_RK3(i)-h*K1_RK3+2*h*K2_RK3);
    y_RK3(i+1)=y_RK3(i)+(h/6)*(K1_RK3+4*K2_RK3+K3_RK3);
end

%% RK-4 method

for i=1:(N-1)
    K1_RK4=y_Dash1(t(i),y_RK4(i));
    K2_RK4=y_Dash1(t(i)+h/2,y_RK4(i)+(h/2)*K1_RK4);
    K3_RK4=y_Dash1(t(i)+h/2,y_RK4(i)+(h/2)*K2_RK4);
    K4_RK4=y_Dash1(t(i)+h,y_RK4(i)+h*K3_RK4);
    y_RK4(i+1)=y_RK4(i)+(h/6)*(K1_RK4+2*K2_RK4+2*K3_RK4+K4_RK4);
end

%% Mid Point method

for i=1:(N-1)
    K1_MdPt=y_Dash1(t(i),y_MdPt(i));
    K2_MdPt=y_Dash1(t(i)+h/2,y_MdPt(i)+(h/2)*K1_MdPt);
    y_MdPt(i+1)=y_MdPt(i)+h*K2_MdPt;
end

plot(t,y_Eular,t,y_Heun,t,y_RK3,t,y_RK4,t,y_MdPt);
legend('Eular Explicit','Huen','RK3','RK4','Mid Point')

yTrue=exp(-t.^2);

err_Eular=max(abs(yTrue-y_Eular));
disp(['max error in Eular explicit method = ',num2str(err_Eular)]);

err_Heun=max(abs(yTrue-y_Heun));
disp(['max error in Heun method = ',num2str(err_Heun)]);

err_RK3=max(abs(yTrue-y_RK3));
disp(['max error in RK3 method = ',num2str(err_RK3)]);

err_RK4=max(abs(yTrue-y_RK4));
disp(['max error in RK4 method = ',num2str(err_RK4)]);

err_MdPt=max(abs(yTrue-y_MdPt));
disp(['max error in midpoint method = ',num2str(err_MdPt)]);

% Since RK4 Gives most optimum solution so ode45 uses RK4 in general.
