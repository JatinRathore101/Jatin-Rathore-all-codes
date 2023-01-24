% The Thomas algorithm is Gaussian elimination without pivoting applied to
% a tridiagonal matrix.
%%
% Banded systems arise fairly often in practice; they can
% be solved by a streamlined version Gaussian elimination
% that only operates within the bandwidth.
% In fact, the streamlined solution of tridiagonal systems
% by (pure) Gaussian elimination is occasionally called
% the Thomas algorithm.
% In general, a solver would need to be told that the
% input coecient matrix A is banded, but Matlab
% can detect bandedness automatically.
%%
% We now explore the algorithm to solve a tridiagonal
% linear system by Gaussian elimination with pivoting.
% Note: Complete pivoting destroys the bandedness, 
% causin fill-in, but partial pivoting preserves it.
%%
function [X]=Tri_diag_mtrx_thomas_method(A,B)
    clc;
    
    % Many engineering problems reduce to banded matrix form of bandwidth 3,
    % that is to a tri-diagonal Matrix, which can be solved by Thomas method.
    
    n=size(B);
    X=zeros(n);
    D=[zeros(n)]';
    disp('Augmented Matrix :-');
    disp([A,B]);
    disp(' ');
    Aug=[A,B]; % Augmented matrix
    
    % making lower diagnol elements zero, main diagnol elements 1,
    % corresponding changes in upper diagnol and B sub column matrix
    
    Aug(1,:)=Aug(1,:)/Aug(1,1);
    
    for i=2:n(1,1)
        Aug(i,:)=Aug(i,:)-Aug(i-1,:)*Aug(i,i-1);
        Aug(i,:)=Aug(i,:)/Aug(i,i);
    end
    disp(' ');
    disp(Aug);
    disp(' ');
    
    
    X(n(1,1))=Aug(n(1,1),end);
    
    for i=(n(1,1)-1):-1:1
        X(i)=Aug(i,end)-X(i+1)*Aug(i,i+1);
    end

disp('pivoting is not applied in thomas algorithm so it may even fail');
disp('in case pivot element is zero, do not expect it to always provide');
disp('correct result');

end 


 
% This might be incorrect code check again

