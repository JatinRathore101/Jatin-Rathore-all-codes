%     fsolve solves systems of nonlinear equations of several variables.
%               
%     F(X) = 0    where F and X may be vectors or matrices.   
% 
%     (Note that the Jacobian J is the transpose of the gradient of F.)
%  
%     fsolve implements three different algorithms: trust region dogleg,
%     trust region, and Levenberg-Marquardt. Choose one via the option
%     Algorithm: for instance, to choose trust region, set OPTIONS =
%     optimoptions('fsolve','Algorithm','trust-region'), and then pass
%     OPTIONS to fsolve.

%% examples:-
clc;
y=[0.0001,1,3,4];




disp('for f(x)=2-x+ln(x)');
for i=1:4
    disp(fsolve(@(x) fzero_input_func(x), y(i)));%for user defined function
end
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');






disp('for f(x)=sin(x)');
for i=1:4
    disp(fsolve(@(x) sin(x), y(i)));              %for inbuild function
% returns 0 for guess=1, as 0 is the nearest value near 1 where sin(x)=0
% returns 3.14 for pi
end
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
% If it finds the root returns equation solved ,
% else returns No solution found for the initial guess provided






% FUN can be specified using @:
disp('Input is row vector so ouptut also row vector');
x = fsolve(@sine2xminushalf,[2 3 4]);
disp(x);
%     X = fsolve(FUN,X0) starts at the matrix X0 and tries to solve the 
%     equations in FUN.  FUN accepts input X and returns a vector (matrix) of 
%     equation values F evaluated at X.
%     => no loop needed
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp('Input is column vector so ouptut also column vector');
x = fsolve(@sine2xminushalf,[2; 3; 4]);
disp(x);
%     X = fsolve(FUN,X0) starts at the matrix X0 and tries to solve the 
%     equations in FUN.  FUN accepts input X and returns a vector (matrix) of 
%     equation values F evaluated at X.
%     => no loop needed
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');








x = fsolve(@sine2xminushalf,[2 3 4],optimoptions('fsolve','Display','iter'));
disp(x);         
% Again using same function with just
% optimoptions('fsolve','Display','iter') argument extra
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
          
          



% %    FUN can also be an anonymous function:
disp('FUN can also be an anonymous function:');  
disp(fsolve(@(x) sin(3*(x)),[1 4]));                           %% CHAIN
% If FUN is parameterized, you can use anonymous functions to capture the 
% problem-dependent parameters
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp('One more example of chaining such parameter functions');
disp(fsolve(@(x) sin(3*(exp(x))),[1 4]));
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');
disp(' ');

             











%%
% %     To solve the system of equations for a specific value of c, first 
% %     assign the value to c. Then create a one-argument anonymous function 
% %     that captures that value of c and calls myfun with two arguments. 
% %     Finally, pass this anonymous function to fsolve:
%   
%         c = -1; % define parameter first
%         x = fsolve(@(x) myfun(x,c),[-5;-5]);
% ???????????

