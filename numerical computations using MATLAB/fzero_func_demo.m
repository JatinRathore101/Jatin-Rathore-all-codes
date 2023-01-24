% function to use as input in fzero is f(x)=2-x+ln(x) saved as fzero_input_func()
clc;
a=fzero(@(x) fzero_input_func(x), [3,4]);
disp(['root between   3 , 4 = ',num2str(a)]);
disp(' ');

disp('Now let us change our guess values from (3,4) to (0+h,3), h->0, h=1e-5')
disp(' ');
a=fzero(@(x) fzero_input_func(x), [1e-5,3]);
disp(['root between   0 , 3 = ',num2str(a)]);
disp(' ');
disp('So by changing guess interval we can find different approximate roots using fzero() function which operates on bisection method');

disp(' ');
disp('But the command {   fzero(@(x) fzero_input_func(x), [1e-5,4]);   } is invalid');
disp('shows error Error using fzero, Function values at the interval endpoints must differ in sign.');
disp(' ');

%%
% >>help fzero
% 
%     X = fzero(FUN,X0), where X0 is a scalar value, uses X0 as a starting 
%     guess. fzero looks for an interval containing a sign change for FUN and 
%     containing X0.  If no such interval is found, NaN is returned.  
%     In this case, the search terminates when the search interval 
%     is expanded until an Inf, NaN, or complex value is found.
% 
%     X = fzero(FUN,X0), where X0 is a vector of length 2, assumes X0 is a 
%     finite interval where the sign of FUN(X0(1)) differs from the sign of 
%     FUN(X0(2)). An error occurs if this is not true.  Calling fzero with a
%     finite interval guarantees fzero will return a value near a point where
%     FUN changes sign.

