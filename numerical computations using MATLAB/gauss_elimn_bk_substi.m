% solving system of linear equations using
% Gauss Elimination (Augumented matrix to upper triangular matrix using
% pivot elements(diagnol ones))
% and Back Substitution (Substitute the last value recieved)
% https://youtu.be/Gkit1hUTsX8  watch this video of Gajendra Purohit

%% Example of gauss elimination and back substitution

% condider equations x+y+z=10 , 2x-y+z=11 , x+2y+3z=23
% 
% for AX=B create augumanted matrix
% 
% 
%             1    1    1    :    10
%   [A:B] =   2   -1    1    :    11
%             1    2    3    :    23
% 
% apply row elimination to convert A matrix to upper triangular matrix and do those operations in B also
% 
% 
%             1    1    1    :    10
%       =>    0   -3   -1    :    -9
%             0    0    5/3  :    10
% 
% Now at this point our guass elimination has completed now we will do back substitution
%  x+y+z=10    -----------I 
%  3y+z=9      -----------II
%  (5/3)z=10   -----------III
% 
% substitution III -> II -> I backwards
% 
% from III we get z=6
% 
% puting z=6 in II we get y=1
% 
% putting z=6 nad y=1 in I we get x=3
% 
% [x;y;z]=[3;1;6]
% 


%%
clc;
% conside x+y+z=4 , 2x+y+3z=7 , 3x+4y-2z=9
% for AX=B

A=[1 1 1;2 1 3;3 4 -2];
B=[4;7;9];
X=zeros(3,1);

% First doing gauss elimination
Aug=[A,B];
% Advice A diagnolly dominant preferance given to firsat to x coeff, then
% to y coeff then to z coeff , also same order change or row has to be done
% in B

% pivot element (1,1)
Aug(2,:)=Aug(2,:)-(Aug(2,1)/Aug(1,1)).*Aug(1,:);
Aug(3,:)=Aug(3,:)-(Aug(3,1)/Aug(1,1)).*Aug(1,:);

% pivot element (2,2)
Aug(3,:)=Aug(3,:)-(Aug(3,2)/Aug(2,2)).*Aug(2,:);

disp(Aug);
disp(' ');

% Now gauss elimination done 
% Now doing back substitution (Last row to first row)
X(3)=Aug(3,end)/Aug(3,3);

X(2)=(Aug(2,end)-X(3)*Aug(2,3))/Aug(2,2);

X(1)=(Aug(1,end)-X(3)*Aug(1,3)-X(2)*Aug(1,2))/Aug(1,1);

disp(X);
disp(' ');





%% Now this was for this simple 3*3 matrix what about big matrix where we need loop


% Doing same problem with loop 
% ---------------VVIP-----------------


%%
% conside x+y+z=4 , 2x+y+3z=7 , 3x+4y-2z=9
% for AX=B

A=[1 1 1;2 1 3;3 4 -2];
B=[4;7;9];
n=size(B);
X=zeros(n);

% First doing gauss elimination
Aug=[A,B];

for i=1:n-1 % though n is size(b) =>n is 1*2 matrix a coordinate
    % still we can use it for loop directly instead of n(1,1).
    % for pivot element Aug(i,i)
    for j=(i+1):n
    Aug(j,:)=Aug(j,:)-(Aug(j,i)/Aug(i,i)).*Aug(i,:);
    end
end

disp(Aug);
disp(' ');

% Now gauss elimination done 
% Now doing back substitution (Last row to first row)
for i=n:-1:1
    for_minus=0;
    for j=n:-1:1
        for_minus=for_minus+ X(j)*Aug(i,j);
    end
    X(i)=(Aug(i,end)-for_minus)/Aug(i,i);


% X(3)=Aug(3,end)/Aug(3,3);
% 
% X(2)=(Aug(2,end)-X(3)*Aug(2,3))/Aug(2,2);
% 
% X(1)=(Aug(1,end)-X(3)*Aug(1,3)-X(2)*Aug(1,2))/Aug(1,1);

end


disp(X);











