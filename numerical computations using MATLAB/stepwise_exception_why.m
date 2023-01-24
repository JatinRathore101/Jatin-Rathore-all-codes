clc;
h=[0.0001:0.0001:0.03];
a=0.1;
err=ones(1,300);
k=ones(1,300);
for i=1:300
    x=0;
    
    while(a>=x+h(i))
        k(i)= exp(x)+h(i)*exp(x);
        x=x+h(i);
    end
   
    err(i)=exp(a)-k(i);

end

loglog(h,err,'r:*');
xlabel('log of stepsizes log(h)');
ylabel('log of errors');


%% 

% Local Truncarion error :-
% LTE is error in obtaining f(x) with single application of numerical
% scheme.

% Global Truncation error :-
% GTE is error in obtaining f(x) with multiple application of numerical
% scheme. At each application step the error from last step is added.

% Hence, in obtaining the same f(x) :- LTE < GTE

%%

% True error = abs(x(True)-x(i))
% Current error= abs(x(i)-x(i-1))

%%

% Direct methods ( Direct application )
% ex:- Numerical derivative :-    f'(a)=(f(a+h)-f(a))/h 

% Iterative methods ( until convergence )
% ex:- Heron's Algorithm :- x(i+1)=( x(i) + 2/x(i) )/2

% Step-wise methods ( Until we reach destination )
% ex:- Multi step Taylor's series






