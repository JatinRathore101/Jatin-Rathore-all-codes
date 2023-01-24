function dYbydt = massSpringFun(t,Y)
c=5;
m=10;
k=15;

dYbydt(1,1)=Y(2,1);
dYbydt(2,1)=-(c*Y(2,1)+k*Y(1,1))/m;

end
