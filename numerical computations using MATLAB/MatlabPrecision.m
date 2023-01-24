% Machine Precision
% to show that matlab has presion or least count of
% eps = 2.2204e-16 = 2^(-52)
% => Matlab Operations can be performed over values smaller than that

Least_Count = eps;
a=0.5*Least_Count;
disp([num2str(a),' : MATLAB considers a-2 = b = eps as considerable of significant']);
b=2^(-53);
disp([num2str(b),' : though c-2 = d = 2^(-53) != 0 , it shows zero cause smaller than Least count of Machine precision in MATLAB']);



% All the measuring devices have a least count, in fraction of least count
% a device can't measure, similarly machine also has a least count for real
% numbers. Machine precision depends on number of bytes to store the value.

% so between a number a and a+x if their exists no number then x is what
% is machine precision

% When more memory is alloted for a number, then it is stored with higher
% precision. double has more precision (more significant figures) than
% float. float=4 bytes , double=8 bytes.

% In bigger real numbers, for precise calculations we may use double
% instead of float. 