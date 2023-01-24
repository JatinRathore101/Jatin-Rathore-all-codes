function [Y]= Lorenzoeq(X)
x=X(1);
y=X(2);
z=X(3);

Y(1)=x-y;  
Y(2)=2*x-x*z-y;  
Y(3)=x*y-3*z;
end
