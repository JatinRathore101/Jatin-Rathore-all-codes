% simple parabolic curve between x,y of a ball thrown at 60 degree from
% X0=Y0=0, U0=20 m/s , for 2*(3)^(1/2)
% but T=12^0.5 is not divisible by 0.1 so for simplicity we say T=3.4

t=[0:0.1:3.4];
Ux=20*cos(pi/3);
Uy=20*sin(pi/3);
x=(Ux).*t;
y=(Uy).*t-5.*[t.^2];







% ------------------------- plot() function -----------------------------

% plot(x,y) , plots y as a relation of x [ not necessarily function ].

% plot(X,Y) plots vector Y versus vector X. If X or Y is a matrix,
% then the vector is plotted versus the rows or columns of the matrix,
% whichever line up.

% If X is a scalar and Y is a vector, disconnected line objects are
% created and plotted as discrete points vertically at X.
 
% plot(Y) -  plots the columns of Y versus their index.

% If Y is complex, plot(Y) is equivalent to plot(real(Y),imag(Y)).
% In all other uses of plot, the imaginary part is ignored.


% Various line types, plot symbols and colors may be obtained with
% plot(X,Y,S) where S is a character string made from one element
% from any or all the following 3 columns:
 
%           b     blue          .     point              -     solid
%           g     green         o     circle             :     dotted
%           r     red           x     x-mark             -.    dashdot 
%           c     cyan          +     plus               --    dashed   
%           m     magenta       *     star             (none)  no line
%           y     yellow        s     square
%           k     black         d     diamond
%           w     white         v     triangle (down)
%                               ^     triangle (up)
%                               <     triangle (left)
%                               >     triangle (right)
%                               p     pentagram
%                               h     hexagram

% 's1s2s3' , the position of three values inside string s can
% change => 'go--' 'og--' 'g--o' '--go' '--og' 'o--g' are all same plot
% codes for (green color plot) with (--) dashed design and
% (o) circular marker ==> (six shuffled string for same plot design)

% plot(X1,Y1,S1,X2,Y2,S2,X3,Y3,S3,...) combines the plots defined by
% the (X,Y,S) triples, where the X's and Y's are vectors or matrices
% and the S's are strings.

% For example, plot(X,Y,'y-',X,Y,'go') plots the data twice, with a
% solid yellow line interpolating green circles at the data points.

% If you do not specify a marker type, plot uses no marker. 
% If you do not specify a line style, plot uses a solid line.

% Plot returns text data also is you store it in some variable
% a=plot(x,sin(x)); returns a lot of data
% plot returns a column vector of handles to lineseries objects,
% one handle per plotted line.









