%  quad   Numerically evaluate integral.
%     Q = quad(FUN,A,B) tries to approximate the integral of scalar-valued
%     function FUN from A to B to within an error of 1.e-6 using recursive
%     adaptive Simpson quadrature. FUN is a function handle. The function
%     Y=FUN(X) should accept a vector argument X and return a vector result
%     Y, the integrand evaluated at each element of X.
%  
%     Q = quad(FUN,A,B,TOL) uses an absolute error tolerance of TOL
%     instead of the default, which is 1.e-6.  Larger values of TOL
%     result in fewer function evaluations and faster computation,
%     but less accurate results.  The quad function in MATLAB 5.3 used
%     a less reliable algorithm and a default tolerance of 1.e-3.
%  
%     Q = quad(FUN,A,B,TOL,TRACE) with non-zero TRACE shows the values
%     of [fcnt a b-a Q] during the recursion. Use [] as a placeholder to
%     obtain the default value of TOL.
% 
% 
%     Example:
%        Q = quad(@myfun,0,2);
%     where the file myfun.m defines the function:
%        %-------------------%
%        function y = myfun(x)
%        y = 1./(x.^3-2*x-5);
%        %-------------------%
%  
%     or, use a parameter for the constant:
%        Q = quad(@(x)myfun2(x,5),0,2);
%     where the file myfun2.m defines the function:
%        %----------------------%
%        function y = myfun2(x,c)
%        y = 1./(x.^3-2*x-c);
%        %----------------------%
%  
%     Class support for inputs A, B, and the output of FUN:
%        float: double, single

% integrand function can be inbuild like using @sin, @ln etc. 

%%
clc;
a=quad(@sin,0,pi);
disp(['integral is ',num2str(a)]);

for i=1:10
    b(i)=quad(@log,i-1,i);
    disp(['b(',num2str(i),')=',num2str(b(i))]);
end

%% I am not doing it with userdefined mathematical function because it will be similar.
