% stiff systems => ode45 fails -> use ode15s
% 
% consider following ODEs
% dx1/dt=-100x1 
% dx2/dt=-0.01x2
% 
% => for y=[x1;x2]
% dy/dt=[-100 0;0 -0.01]*[x1;x2]
% 
% initial condition given: x1(t=0)=1 , x2(t=0)=1

%% solving using ode45 
Y0=[1;1];
tSpan=[0,100];
[tSol1,ySol1]=ode45(@(t,y) stiffSfun(t,y),tSpan,Y0);
%plot(tSol1,ySol1)

disp(['no of steps by ode45 function = ',num2str(length(tSol1))]);

%% solving using ode15s
[tSol2,ySol2]=ode15s(@(t,y) stiffSfun(t,y),tSpan,Y0);
%plot(tSol2,ySol2)

disp(['no of steps by ode15s function = ',num2str(length(tSol2))]);

disp(' ');
disp('eig([-100 0;0 -0.01]) = ')
disp(eig([-100 0;0 -0.01]));
A=eig([-100 0;0 -0.01]);
disp(['ratio of eiganvalues = ',num2str(A(1,1)/A(2,1))]);
disp('When ratio of eiganvalues is a reasonably large number then we');
disp('encounter stiff systems');

