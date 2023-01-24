% to animate a plot
clc;

% Define x points 
x = 0:1:50;

% Define the equation
y = x.^3-x+1;

% Plot the graph for demonstration
% plot(x,y);

% Animate function 
h = animatedline;

% Define for loop
for i = 1:length(x)
    addpoints(h,x(i),y(i)); % Adds each point 
    drawnow;    % Animates the plot
    pause(0.1);    % Pauses 0.5 seconds after adding each point
end

