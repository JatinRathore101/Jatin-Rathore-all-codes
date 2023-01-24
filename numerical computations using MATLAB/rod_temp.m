function dYbydt= rod_temp(t,Y)
%Y=[T;dT/dt]
Ta=25;
alpha=0.025;
beta=0.1;

% getting tempratures
N=length(Y)+1; % here Y send as only from (2 to N)
T(1)=100;
T(N+1)=25;
T(2:N)=Y;
h=1/N; % length of rod (1m) by number od sections

fval=zeros(N+1,1);



% dT/dt = alpha*((d/dt)^[2](T)) - beta*(T-Ta)
% dT[i]/dt = alpha*(T[i+1]-2*T[i]+T[i-1])/(dx)^2 - beta*(T[i]-Ta)

for i=2:N
    fval(i)= (alpha/h^2)*(T(i+1)-2*T(i)+T(i-1))-beta*(T(i)-Ta);
end

%extract dTbydt from fval
dYbydt=fval(2:N);
end