function dYbydt = Helicopter_shot(t,Y)
% horizontal accelaration due to air drag = -ku
% verticl accelaration = -g
% given: k=0.006  ,  g=10 

g=10;
k=0.006;
dYbydt(1,1)=Y(3,1);
dYbydt(2,1)=Y(4,1);
dYbydt(3,1)=-k*Y(3,1);
dYbydt(4,1)=-g;

end