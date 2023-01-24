% creating matrices for plots

x=[0:0.1:5];
y1=sin(x);
y2=cos(x);
y3=y1+y2;
y4=y1.^2;
x2log=log(x);
y2log=log(y4);
y=[y1;y2;y3];
plot(x,y);
hold on
plot(x,y4,'-.r');
hold on
plot(x,log(y4),'--b');




% plot(x,y) , plots y as a relation of x [ not necessarily function ].

% xlabel('xyz...') , ylabel('fdjhn...') are used to label the x and y
% axes respectively of the current going on unclosed plot with the
% strings passed.

% [ hold on ] keywords are used to make anotj=her plot over the current
% going on unclosed plot

% to lot multiple curvess over same plot without hold on we can make y to
% be matrix of several y1,y2... etc and then plot(x,y)

% The lower the gap we put in x vector the smoother curve will be.
% x=[0:0.01:5] will make much smoother curve than x=[0:1:5]

% loglog(x,y) is exactly same as plot(log(x),log(y))

% the undefined values are simply ignored in plot()

% We can directly use plot function in scripts after getting matrices in
% script , for multiple plots on same curve via script.

% TIP:- while using xlabel() , ylabel() , hold on - don't close the plot
% window just minimize it.




