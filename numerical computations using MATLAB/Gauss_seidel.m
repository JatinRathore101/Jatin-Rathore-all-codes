function [X] = Gauss_seidel(A,B)
clc;
n=size(B);
X=zeros(n);
err=zeros(n);
disp(' ');
tol=10^(-5); % tolerance (max allowed error)


for i=1:100
    Xold=X;
    for j=1:n   % for making expressions for X(i)
        X(j)=(B(j)-A(j,:)*X+A(j,j)*X(j))/A(j,j);
    end
    err=abs(X-Xold);
    disp(['X after ',num2str(i),' iteration'])
    disp(X');
    disp(['error after ',num2str(i),' iteration'])
    disp(max(err));
    disp(' ');
    disp(' ');
    disp(' ');
    if (max(err)<tol)
        break;
    end
    
end

disp('If your answer does not converge or is not as desired try,');
disp('interchanging rows in input A and corresponding changes');
disp('position of elements of B');

