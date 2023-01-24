% Define x points 
clc;
t = 0:0.01:10;
phi=[0:0.1:10].*pi;

% Define the equation
for i=1:length(phi)
x = sin(pi*t+phi(i));
plot(t,x)
hold on
pause(0.2)
hold on
clf
hold on
end