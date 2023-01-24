% for n is Natural Number, x in interval (-1,1)-{0}
% finding percentage error matrix with length as much 
% as order of Maclaurin series
% Maclaurin series
% n=order of series and n+1 = length of [E] matrix
% x=the input in exponent function
% e^x= 1 + x/1 + x^2/2! + x^3/3! + .............. + x^n/n! 
% (maclaurin series of order n )   E=[exp(x)-1];

% error decreases by increasing n, but error increases by increasing x. 

function [E] = McLaurinTruncateError(n,x)
ProdTerm=1;
TempSum=1;
E=[1];
for i=1:n
    ProdTerm=ProdTerm*(x/i);
    TempSum=TempSum+ProdTerm;
    E=[E,TempSum];
end
%currently our E is just error matrix , 
% so making it percentage error matrix.
E=1-E./exp(x);
E=E.*100;
end


% error = | true_value - approx_value |
% More the number of terms,( higher the n ) lesser will be the error.

% The type of error described here is called truncation error,
% the earlier we truncate ( lower the value of n ) more will be error.

% truncation error and round off error--
% Taylor's series:  f(x+n) = f(x) + ((n)*f'(x)) + ((n^2)*f''(x))/2! +
% ((n^3)f'''(x))/3! + .......... + (a^n)/n! + 0*(a^n + 1)
% The last term implies error in retaining the only finite number
% of terms in the series. Order of accuracy increases as we retain
% greater number of terms.







