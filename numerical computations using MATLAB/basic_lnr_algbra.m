% https://youtu.be/ccaHV-ukK2o  Rank of a matrix 

% The rank of a matrix A is defined as the order of a highest order 
% non-vanishing minor of the matrix A. It is denoted by the symbol ρ (A). 
% The rank of a zero matrix is defined to be 0.

% If determinant of matrix is non zero then, rank of matrix = order of matrix

% If determinant of matrix is zero then, rank of matrix =  total non zero
% rows in the upper triangular matrix formed from orignal matrix via
% elementry row transformations.

% rank exist for non square matrix and solved by elementry transformation, 
% see question 6 from above video  https://youtu.be/ccaHV-ukK2o?t=2172



% https://youtu.be/1wjXVdwzgX8  eigenvalues and eigenvectors

% the product of eigenvalues of a matrix is equal to the determent of the
% matrix.

% the sum of eigenvalues of the matrix is equal to its trace

% To find eigen values of any square matrix A , 
% use equation |A-hI|X=0 , expand |A-hI| and put it equal to zero, then 
% solve for h, values of h are our eigen values, can be sam or all distinct.  

% norm is indication of size of a vector(column vector)
%%
clc;
% number of solutions of set of equation written in form AX=B is determined
% by the rank of the sq matrix [A]n*n = n then we have unique soution fo X

% When rank of the sq matrix [A]n*n is less than n then we have either 0 or
% infinite solution depending on 1.
% if rank of [[A],[B]] is not equal to Rank of [A] => infinite solution.
% if rank of [[A],[B]]= Rank of [A] => infinite solution.
% Note:- rank exist for non sq matrix also.

% To find rank of matrix use rank(A) function

%%
% condider equations x+y+z=10 , 2x-y+z=11 , x+2y+3z=23
disp('case 1:-');
disp('x+y+z=10 , 2x-y+z=11 , x+2y+3z=23');
A=[1,1,1;2,-1,1;1,2,3];
B=[10;11;23];
disp(['rank(A)=',num2str(rank(A))]);
% unique solution when rank=order
X=zeros(3,1);
if rank(A)==3
    X=A\B;
    disp(X);
else
    disp('no unique solution');
end
disp(' '); % for new line




% consider equations 8x+2y-z=1 , 3x-2y+z=2 , 5x-2y+z=3
disp('Case 2:-')
disp('8x+2y-z=1 , 3x-2y+z=2 , 5x-2y+z=3')
A=[8 2 -1;3 -2 1 ;5 -2 1];
B=[1;2;3];
disp(['rank(A)=',num2str(rank(A))]);
disp(['rank([A,B])=',num2str(rank([A,B]))]);
if rank(A)==rank([A,B])
    disp('infinite solutions exist');
else
    disp('no solution');
end
disp(' '); % for new line



% consider equations 8x+2y-z=7 , 3x-2y+z=4 , 5x-2y+z=6
disp('Case 3:-')
disp('8x+2y-z=7 , 3x-2y+z=4 , 5x-2y+z=6')
A=[8 2 -1;3 -2 1 ;5 -2 1];
B=[7;4;6];
disp(['rank(A)=',num2str(rank(A))]);
disp(['rank([A,B])=',num2str(rank([A,B]))]);
if rank(A)==rank([A,B])
    disp('infinite solutions exist');
else
    disp('no solution');
end
disp(' '); % for new line







%%
% Condition number of A (ratio of eigenvalues of A matric in AX=B) is higher
% then condition number then sor a very small change in B matrix A
% changes significantly. cond(A) gives condition number of sq matrix A.

% consider 2 sets of equations
% set 1:-  x+2y=1 , 2x+3.99999y=2.00001
% set 2:-  x+2y=1 , 2x+3.99999y=2

disp('set 1:-  x+2y=1 , 2x+3.99999y=2.00001');  
A=[1 2;2 3.99999];
B=[1;2.00001];
X=A\B;
disp('X=inv(A)*B=');
disp(X);
disp(' ');

disp('set 1:-  x+2y=1 , 2x+3.99999y=2');  
A=[1 2;2 3.99999];
B=[1;2];
X=A\B;
disp('X=inv(A)*B=');
disp(X);
disp(' ');

disp('why this much high variation from x=3,y=-1 in set 1  to x=1,y=0 in set 2')
disp(['because condition number of A=',num2str(cond(A)),' is very high'])
disp(' ');

%%
% eig(A) function gives eigenvalues of sq matrix A.
% eig    Eigenvalues and eigenvectors.
% E = eig(A) produces a column vector E containing the eigenvalues of 
% a square matrix A.
%  
% [V,D] = eig(A) produces a diagonal matrix D of eigenvalues and 
% a full matrix V whose columns are the corresponding eigenvectors  
% so that A*V = V*D.
% 
% Understand calling pattern of eig() , => two matrices returnes.
% 
% for more information abaout eig() function use >>help eig
