% plotting fft of a signal given in sinusuidal form

t=0:0.1:10;
A=2;
w=10;
phi=0;
x=A*sin(w*t+phi);
% plot(t,x);

xfft=fft(x,1024);  % gives both real and imaginary values so for plotting
                   % fft we need absolute value.

plot(abs(xfft));