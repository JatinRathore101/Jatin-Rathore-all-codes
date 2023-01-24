%% In first order derivatives.

% Forward Differentiation is given by:-
% f'(x) = (f(x+h)-f(x))/h 0*(h)   ,   accuracy of orter h.
% error decreases by factor of p when h decreases by a factor of p.

% Central Differentiation is given by:-
% f'(x) = (f(x+h)-f(x-h))/2h + 0*(h^2)   ,   accuracy of orter h^2.
% error decreases by factor of p^2 when h decreases by a factor of p.
% => more accurate

% Backward Differentiation is given by:-
% f'(x) = (f(x)-f(x-h))/h + 0*(h)   ,   accuracy of orter h. 
% error decreases by factor of p when h decreases by a factor of p.






%% Implementing concept over f(x)=tan^{-1}(x) , by f'(x=1)

clc;

x=1;
h=10.^[-1:-1:-5];

true_val=1/(1+x^2);

%% Using h1 values 

fwd_diff=(atan(x+h)-atan(x))./h;
err_fwd=abs(true_val-fwd_diff);
disp(['Error matrix of Forward Differentiation   ',num2str(err_fwd)]);

ctr_diff=(atan(x+h)-atan(x-h))./(2.*h);
err_ctr=abs(true_val-ctr_diff);
disp(['Error matrix of Central Differentiation   ',num2str(err_ctr)]);

bck_diff=(atan(x)-atan(x-h))./h;
err_bck=abs(true_val-bck_diff);
disp(['Error matrix of Backward Differentiation  ',num2str(err_bck)]);

loglog(h,err_fwd,':ok',h,err_ctr,'-*b',h,err_bck,'-*r');
legend('error in Forward Differentiation','error in Central Differentiation','error in Backward Differentiation');


%% Result and Observation
% 
% Error in Forward Differentiation is almost equal to Error in Backward
% Differentiation.

% Error in central differential is very small (of the order of square of
% what it is in forward and backward differentiation)

% These loglog plots of h vs error show minimas and exceptions when h
% matrix is taken much smaller values , for ex:- put h=h.^2 in the
% beggining and see the results.

    