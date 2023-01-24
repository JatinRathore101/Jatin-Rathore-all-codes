% Applying Thomas Algorithm to solve the equation d^[2]T/(dx)^[2] = k(T-25)
% where T is linearly varying temprature accross a rod of length 1m, we have to find
% temprature at each 10 cm of rod. k=4; given T0=100, T10=25 
%T0 and T10 correspond to 0 m(starting of rod) and 1m(ending of rod)

% From central difference formula dT/dx=(T(x+h)-T(x-h))/2h
% and d^[2]T/(dx)^[2] = (T(x+2h)-2T(x)-T(x-2h))/4h^2 = k(T(x)-25) , k=4

%Now for 2h=10cm=0.1m  T(x-2h)=Ti-1 , 2T(x)=Ti , T(x+2h)=Ti+1
% => ( Ti+1 - 2Ti + Ti-1 )/(0.1)^2 = 4(Ti-25)
% => ( Ti+1 - (2+0.04)Ti + Ti-1 )= -1

% 0m correspond to (i=0) or T0
% 0.1m correspond to (i=1) or T1
% 0.2m correspond to (i=2) or T2
% ------------------------------
% ------------------------------
% 1m correspond to (i=10) or T10

% We know T0 and T10 so only variables to be evaluated from (T1 to T9)
% => 9 equations

% equation 1:-  T2 - 2.04T1 + 100 = -1
% equation 2:-  T3 - 2.04T2 + T1 = -1
% equation 3:-  T4 - 2.04T3 + T2 = -1
% -----------------------------------
% -----------------------------------
% equation 8:-  T9 - 2.04T8 + T7 = -1
% equation 9:-  25 - 2.04T9 + T8 = -1

% A=[-2.04 1 0 0 0 0 0 0 0;1 -2.04 1 0 0 0 0 0 0;0 1 -2.04 1 0 0 0 0 0;0 0 1 -2.04 1 0 0 0 0;0 0 0 1 -2.04 1 0 0 0;0 0 0 0 1 -2.04 1 0 0;0 0 0 0 0 1 -2.04 1 0;0 0 0 0 0 0 1 -2.04 1;0 0 0 0 0 0 0 1 -2.04]
% X=[T1;T2;T3;T4;T5;T6;T7;T8;T9]
% B=[-101;-1;-1;-1;-1;-1;-1;-1;-26]

%%
clc;

A=[-2.04 1 0 0 0 0 0 0 0;1 -2.04 1 0 0 0 0 0 0;0 1 -2.04 1 0 0 0 0 0;0 0 1 -2.04 1 0 0 0 0;0 0 0 1 -2.04 1 0 0 0;0 0 0 0 1 -2.04 1 0 0;0 0 0 0 0 1 -2.04 1 0;0 0 0 0 0 0 1 -2.04 1;0 0 0 0 0 0 0 1 -2.04];
X=zeros(9,0);
B=[-101;-1;-1;-1;-1;-1;-1;-1;-26];

X=Tri_diag_mtrx_thomas_method(A,B);

T=[100;X;25]';
at_length=[0:0.1:1];
plot(at_length,T,':*r');
