% % https://youtu.be/dP9NOCj4dPM
%  
% % https://youtu.be/zPDp_ewoyhM    youtube video titled "Newton's method for
% % solving nonlinear systems of Algebraic equations" by "the math guy"
% % //SUPER VVIP//
% 
% % solve system of equations  ( x-y=0 , 2x-xz-y=0 , xy-3z=0 )
% % converging equation ->  Xi+1 = Xi - inv(jac(Xi))*[F_vector];
%%
clc;
X=[1 -1 -1;1 -1 -1;1 1 0];
for i=1:3
    Xold=X(:,i);
    for j=1:50
        [jac,F]=jac_F(X(:,i));
        X(:,i)=X(:,i)-inv(jac)*F;
        err=abs(X-Xold);
        if(max(err)<(0.0001))
            break;
        end
    end
    disp(['Approximate values of x, y, z with initial values x0 = ',num2str(X(1,i)),' ,y0 = ',num2str(X(2,i)),' ,z0 = ',num2str(X(3,i)),' is ']);
    disp(X(:,i));
    disp(' ');
end
