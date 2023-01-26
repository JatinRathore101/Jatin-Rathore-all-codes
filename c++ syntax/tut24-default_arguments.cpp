#include <iostream>
using namespace std;

// Default Arguments in C++

// A function with default arguments,
// it can be called with
// 2 arguments or 3 arguments or 4 arguments.
float sum(int x, int y, float z = 1.45, int w = 0)
{ // Be remeber compulsary (needed to input) arguments are written left ward, while default written right wards.
    return (x + y + z + w);
}


int main()
{
    cout << sum(10, 15) << endl;

    cout << sum(10, 15, 2.5) << endl;

    // cout << sum(10, 15, , 30) << endl;
    // This in invalid only omitting z not possible due to left to right flow

    cout << sum(10, 15, 55, 30) << endl;

    return 0;
}
