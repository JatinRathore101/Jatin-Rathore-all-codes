% Taylor's series:- 
% True exoansion is till infinity. f(x+h)= f(x) + (h)f'(x) + (h^2/2!)f''(x)
% + (h^3/3!)f'''(x) + ................ [inf]

% Approx expansion 
% f(x+h)= f(x) + (h)f'(x) + (h^2/2!)f''(x) + (h^3/3!)f'''(x) +
% (h^4/4!)f^[4'](x) + ........... + (h^n/n!)f^[n'](x) + (0)h^(n+1)
% This approx value using only till [n]th order term hence the error in this
% approximate value is of order [n+1]

% modulas function in Matlab is abs()








% McLaurin series seeing variation in error with x

x=[0.01   0.02   0.05   1];
n=5;
a=[1:n];
error=ones(4,6);
for b=1:4
    error(b,2:6)=x(b).^a./cumprod(a);
    error(b,1:6)=cumsum(error(b,1:6));
    error(b,1:6)=exp(x(b))-error(b,1:6);
    error(b,1:6)=error(b,1:6)./exp(x(b));
    error(b,1:6)=error(b,1:6).*100;
end
n=[0:5];
loglog(n,error(1,1:6),'g*--',n,error(2,1:6),'r*--',n,error(3,1:6),'b*--',n,error(4,1:6),'c*--');
hold on
legend('0.01','0.02','0.05','1');
disp(error);