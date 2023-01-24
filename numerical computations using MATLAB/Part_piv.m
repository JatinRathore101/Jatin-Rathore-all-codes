% https://youtu.be/h9Ezg7BbrwU partial pivoting
% Partial pivoting just means to interchange the rows to get element of
% maximum absolute magnitude in the column at pivot(i,i) place

% Rest all gauss elimination to form an upper triangular matrix and
% back substitution is same.
%%
% Recall, the diagonal elements of U are called pivots.
% Formally, the kth pivot is the coecient of the kth
% variable in the kth equation at the kth step of the
% elimination.
% Both the computation of the multipliers and the back
% substitution require divisions by the pivots.
% So, Gaussian elimination fails if any of the pivots are
% zero, but the problem may still have a perfectly well
% defined solution.
% It is a also bad idea to complete the computation if
% any of the pivots are nearly zero!

%%     max() function
%     M = max(X) is the largest element in the vector X.
% 
%     If X is a matrix, 
%     M  is a row vector containing the maximum element from each column.
%     For N-D arrays, max(X) operates along the first non-singleton dimension.
%
%     [M,I] = max(X) also returns the indices corresponding to the maximum
%     values. The values in I index into the dimension of X that is being
%     operated on. If X contains more than one element with the maximum
%     value, then the index of the first one is returned.
%  
%     for more use >>help max

%%
clc;
A=[0.02 0.01 0 0;1 2 1 0;0 1 2 1;0 0 100 200];
disp(A);
disp(' ');
idx=0;
D=zeros(1,4);
%loop for rearranging of maximum pivots.
% 
z=0;
for i=1:3
    C=zeros(5-i,1);
    C=abs(A(i:4,i));
    [m,idx]=max(C);
    idx=idx+i-1;
    D=A(idx,:);
    A(idx,:)=A(i,:);
    A(i,:)=D;
    for j=(i+1):4
        A(j,:)=A(j,:)-(A(j,i)/A(i,i)).*A(i,:);        
    end
    
    disp(A);
    disp(' ');
end
disp(A); 
% Partially pivoted (abs max at pivots preferance given to first column)

