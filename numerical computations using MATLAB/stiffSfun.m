function dybydt = stiffSfun(t,y)
dybydt=[-100 0;0 -0.01]*y;
end

% stiff system is a system where there are slow and fast dynamics mixed
% together