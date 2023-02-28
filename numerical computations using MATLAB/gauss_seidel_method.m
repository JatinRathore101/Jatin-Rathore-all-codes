% This is an iteration method, we don't actually solve here, It may give
% wrong answer also depending upon initial x1,x2, etc, if the expressions
% formed do not converge;

%%
clc;
% consider equations x+3y=15 , 2x-3y=12 , true solution (x,y)=(9,2)


disp('Case:-1   ( x=15-3y ) , ( y=(2x-12)/3 ) for 20 iterations');
disp(' ');
x=0; %initialization
y=0;
for i=1:20
    x=15-3*y;
    y=(2/3)*x-4;
    disp([i,x,y]);
    disp(' ');
end       
% case:- 1 does not converges so lets go for case 2.



disp(' ');



disp('Case:-2   ( y=5-x/3 ) , ( x=1.5y+6 )  for 20 iterations');
disp(' ');
x=0; %initialization
y=0;
for i=1:20
    x=6+1.5*y;
    y=5-x/3;
    disp([i,x,y]);
    disp(' ');
end


% Now doing this by a functon that takes matrix A and B as input.