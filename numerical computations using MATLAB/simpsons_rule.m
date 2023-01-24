% Numerical Integration:-
% 
% Area bounded by the curve f(x) and X axis between the limits a and b is given by I= [from x=a to x=b]integration(f(x)dx)
% 
% devide the interval (a,b) into n equal intervals each of length h(step size)
% 
% where xi belongs to {x0,x1,x2,........,xn}={ a=b-nh ,  a+h ,  a+2h ,  .............. ,  a+(n-1)h ,  b=a+nh }  (total n+1 values)
% corresponding values og integrand function at xi be yi say {y0=f(a),y1=f(a+h),......,yn=f(b)}
% 
% https://youtu.be/iviiGB5vxLA       Youtube video for Simpson,s 1/3 rule

%

% Methods:-
% Trapezoidal rule - Applicable on any number of intervals
% I=(h/2)( (y0+yn) + 2(y1+y2+....+y[n-1]) ) = (h)( (y0+yn)/2 + (y1+y2+....+y[n-1]) )


% Simpsons's 1/3 rule - Applicable if total number of intervals (n) is even
% I=(h/3)( (y0+yn) + 4(y1+y3+y5+....) + 2(y2+y4+y6+.........) )

% Simpsons's 3/8 rule - Applicable if total number of intervals (n) is
% multiple of 3
% I=(3h/8)( (y0+yn) + 3(y1+y2+y4+y5+y7+........) + 2(y3+y6+y9+........) )

% ***********BE REMEMBER ) is not identified as index in matlab, only
% positive integers can be matlab array indeces

%%
clc;
% To evaluate I=[from x=0 to x=1]integration((1/(1+x^2)(dx)) using all
% three methods and calculate percentage error in the value of pi obtaines
% from all thre methods

% True value I=[from x=0 to x=1]integration((1/(1+x^2)(dx)) =
% (tan^[-1](1)-tan^[-1](0)) = pi/4 => pi=4I

% We can break interval (0,1) into n intervals, where n is multiple of 6
% such that all three methods are applicable for same xi values, h=(1-0)/12  
h=(1-0)/12;
x=[0:h:1];
y=1./(1 + xi.^2);

% I1 is integration by trapezoidal rule
I1=(h/2)*( (y(1)+y(13)) + 2*(sum(y(2:(12)))) );
disp(['Value of integration using trepezoidal rule is = ',num2str(I1)]);
disp(['Using trepezoidal rule the value of pi is = ',num2str(4*I1),' and error in pi is = ',num2str(abs(pi-4*I1))]);
err1=((abs(pi-4*I1))/pi)*100;
disp(['percentage error in pi using trepezoidal rule is = ',num2str(err1)]);
disp(' ');

% I2 is integration by Simpson's 1/3 rule
I2=(h/3)*( (y(1)+y(13)) + 4*(sum(y(2:2:12))) + 2*(sum(y(3:2:11))) );
disp(['Value of integration using Simpson 1/3 rule is = ',num2str(I2)]);
disp(['Using Simpson 1/3 rule the value of pi is = ',num2str(4*I2),' and error in pi is = ',num2str(abs(pi-4*I2))]);
err2=((abs(pi-4*I2))/pi)*100;
disp(['percentage error in pi using Simpson 1/3 rule is = ',num2str(err2)]);
disp(' ');

% I3 is integration by Simpson's 3/8 rule
I3=(3*h/8)*( (y(1)+y(13)) + 3*(sum(y(2:12))-sum(y(4:3:10))) + 2*(sum(y(4:3:10))) );
disp(['Value of integration using Simpson 3/8 rule is = ',num2str(I3)]);
disp(['Using Simpson 3/8 rule the value of pi is = ',num2str(4*I3),' and error in pi is = ',num2str(abs(pi-4*I3))]);
err3=((abs(pi-4*I3))/pi)*100;
disp(['percentage error in pi using Simpson 3/8 rule is = ',num2str(err3)]);