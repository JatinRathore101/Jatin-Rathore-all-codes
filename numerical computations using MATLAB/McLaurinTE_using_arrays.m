function [percentage_error] = McLaurinTE_using_arrays(n,x)
a=[1:n];
terms=[1,x.^a./cumprod(a)]; % pay attention over this expression
terms=cumsum(terms);
error=exp(x)-terms;
relative_error=error./exp(x);
percentage_error=relative_error.*100;
end

% some important expressions (b.*A)=(A.*b); but (b./A) not equal to (A./b)

% A-b or A+b adds -b or +b to each element of mattrix.
% Here .+ or .- not needed.
%resultant of   .opretor   operations is a matrix of same dimensions.  

