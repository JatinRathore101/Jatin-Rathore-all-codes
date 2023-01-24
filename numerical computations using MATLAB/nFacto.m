%factorial of 7

facto=1;
for i=[2:7]
    facto=facto*i;
end


% instead of loop (lines 3,4,5,6) directly facto=prod(1:7); can be used for 7 factorial.
% n factorial = prod(1:n);