% error variation in fixed point method(linear variation) and
% Newton Raphson method(quadratic variation) with consecutive iterations.

% f(x)=2-x+ln(x) , x=log(x)+2 , f'(x)=(1/x)-1 , initial x=3

%%
clc;
x=3;
xold=0;
errx=zeros(1,50);
xn=0;
y=3;
yold=0;
erry=zeros(1,50);
yn=0;
tol=1E-15;

for i=1:50
    x=log(x)+2;
    errx(1,i)=abs(x-xold);
    xold=x;
    if abs(2-x+log(x))<tol
        xn=i;
        disp(['converged in ',num2str(xn),' iterations using Fixed Point Method.']);
        disp(errx(1,1:xn));
        disp(['root = ',num2str(x)]);
        disp(['slope of error variation = ',num2str((log(errx(3))-log(errx(4)))/(log(errx(2))-log(errx(3)))),' just equal to 1']);
        break;
    end
end
disp(' ');
disp(' ');
disp(' ');
disp(' ');
for i=1:50
    f=2-y+log(y);
    fdash=(1/y)-1;
    y=y-(f/fdash);
    erry(1,i)=abs(y-yold);
    yold=y;
    if abs(2-y+log(y))<tol
        yn=i;
        disp(['converged in ',num2str(yn),' iterations using Newton Raphson Method.']);
        disp(erry(1,1:yn));
        disp(['root = ',num2str(y)]);
        disp(['slope of error variation = ',num2str((log(erry(3))-log(erry(4)))/(log(erry(2))-log(erry(3)))),' just equal to 2']);
        break;
    end
end

% for considering 3 iteration for 2 points in err variation in (i+1)th iteration
% wrto ith iteration 

Xfp=[errx(2:3)];
Yfp=[errx(3:4)];
Xnr=[erry(2:3)];
Ynr=[erry(3:4)];
loglog(Xfp,Yfp,':*r',Xnr,Ynr,':*b');
legend('Fixed Point method => linear error variation => slope=1 approx','Newton Raphson method => quadratic error variation => slope=2 approx' );


%% wrong concept check later with some other function












