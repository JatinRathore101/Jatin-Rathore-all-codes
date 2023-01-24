allMarks=[24,44,36;52,57,68;66,53,69;85,40,86;15,47,25;79,72,82];
MechMarks=[36,76,73,72,28,91];



%MatLab is a high level computating language used for computational
%analysis, signal processing and communication field.

% write [ >>edit filename ] to create a new file or update existing .m file.

% comments in matlab files start with % but 
% section break for our own understanding start with %%

%In matlab we can assign a constant, a matrix, an expression,
% a variable matrix etc etc to a variable.

% 2 main data types in matlab are scalars and vectors
% Scalars are number, const etc without direction.(Non-indexed)
% Vectors are Arrays or Matrices.(Indexed)

%when we use ; after an statement then that statement's echo gets
% suppressed => values not displayed

%matlab's command window works just like cmd and is also called command
%prompt sometimes.

%Just like python, in matlab also we need not to specify data types.

%we can directly see the content of any variable by just double clicking it
%in the workspace

%  ^ symbol used for power => 2^5=32

%Basic mathematical scaler operations in matlab
% + - * / ^
% log exp
% pow sqrt
% sin cos tan
% asin acos atan
% rem round ceil floor

% special variable (and default value unless specified)
% pi=3.1416.....
% eps(Machine precision)=2.2204e-16 approx=2^-52
% i represents imaginary unit in complex numbers
% NaN means not a number 0/0
%end - last element of an array, also a very useful keyword
%realmax= largest real number =1.7977e+308
%intmax= largest integer =2147483647
% ans=if the last result is not stored in any other variable it gets assigned to ans

% we can override standard values of above identifiesd variables 
% ex:- pi=10 Afterwards to recover our orignal value of 
% pi we will use clear keyword to clear non-default value inside pi.

% To cloear all variables value in workspace we use clear all command
% To clear out command window we use clc , clc can be saved in script too.

% If A=[]x*y and B=[]x*z than C=[pA,qB] or C=[pB,qA] all exist. 
% similarly, A=[]x*y and B=[]z*y than C=[pA;qB] or C=[pB;qA] all exist.
% (p and a are scalers)

% Transpose of a matrix is simply taken out by an apostophy( ' ) operator
% for A=[]x*y , [ transpose of A ] = A' ([]y*x)

% In matlab, matrix indeces start from 1 instead of zero .
% We can't display the non existing element in a matrix, but we can assign
% any value to any index in the matrix(weather thst index does not exist)
% the matrix will adjust size accordingly

% for dimensions of a matrix we use size(A) function

% When we use colon( : ) notations in matlab to create a matrix than it
% creates a row matrix not the column matrix. ex:- a=[1:2:8]=[1 3 5 7]
% for creation of descending matrix, providing the difference is
% necessary ex:- A=[3:-2:-10]=[3 1 -1 -3 -5 -7 -9] 

% remember use [] to make matrix, mistakenly using {} will make a cell instead.

% ones(m,n) - creates a matrix of only 1s with dimensions m*n.
% zeres(m,n) - creates a matrix of only 0s with dimensions m*n.
% eye(n) - creates a identity matrix of dimension n
% for any matrix A, diag(A) gives diagnol elements of
% A in the form of column vector.
% rand(m,n) - uniform random number array
% randn(m,n) - Gaussian random number array
% magic(m) - Magic square matrix
% hilb - Hilbert Matrix
% ([]x*y)*([]z*w) only possible if y=z

% (^) [matrix power] power operator only applicable to square matrix, 
% (.^) [element wise power] operator applicable to any matrix.

% for exponent of every element inside a matrix we use exp(A)
% expm(A) has some different set of rules

%sum(A,1) row matrix with sum of all columns 
%sum(A,2) column matrix with sum of all rows
%similir flow trend goes with prod(A,x)

% cumsum(A,x) and cumprod(A,x) don't change the dimensions of matrix only flow 
% of working of function depends on whether x=1 or x=2

% Basic matlab operators for matrix
%   those working on inside elements of matrix, dimensions remain unaffected
%      +  -  .*  ./  .^  (dots not needed in + -)
%      log exp
%      power sqrt
%      sin cos tan
%      asin acos atan
%      rem round ceil floor
%   operators which work over matrix (may affect dimension of result)
%      + - * / ^ 
%      logm expm 
%      mpower sqrtm 
%      sum prod cumcum cumprod 
%      min max mean std
%      length size eig

% In defining a matrix we may skip (,) and use space but (;) is compulsary


% Note that .mlx files contain live editor you can code in that also but 
%categorization problem.

% .m files are mostly used.