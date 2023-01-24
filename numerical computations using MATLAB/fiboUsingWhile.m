% fibonacci series using while until the term remains smaller than 200
fibo=[1,1];
while (fibo(1,end)<200)  % no semicolon used in loops initialization
    x=fibo(1,end)+fibo(1,end-1);
    fibo=[fibo,[x]];
end
fibo=fibo(1,1:end-1);

% end is also a predefined variable along with keyword,
% here the end passed in index refers to last (column or row wharever you use) 

% remember to use semicolon after every statement inside body of the loop

% while loop is used when a set of operations is to be 
% repeated till a certain condition is met




