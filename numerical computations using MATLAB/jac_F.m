function [jac,F]=jac_F(X)
% for equations:- ( x-y=0 , 2x-xz-y=0 , xy-3z=0 )
x=X(1,1);
y=X(2,1);
z=X(3,1);

f1=x-y;  
f2=2*x-x*z-y;  
f3=x*y-3*z;
F=[f1;f2;f3];

jac=[ 1  -1  0 ; 2-z  -1  -x ; y  x  -3 ];
end
