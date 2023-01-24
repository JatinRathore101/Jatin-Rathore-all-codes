% displaying ball's altitude at every 0.1 second
Uo=20;
g=9.8;
t=0;
y=0;
while (y>=0)
    disp(['position of ball at ',num2str(t),' sec is ',num2str(y)]);
    y=(Uo)*t-(g/2)*t^2;
    t=t+0.1;
end

% Here disp function is very critical, see we put square [] brakets inside
% disp() parenthesis to make sure that the input is a single string, also 
% num2str() function is used inside the string to format float to string.



