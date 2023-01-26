// CPP Program to demonstrate Function overloading in
// Default Arguments
#include <iostream>
using namespace std;

// A function with default arguments, it can be called with
// 2 arguments or 3 arguments or 4 arguments.
int sum(int x, int y, int z = 0, int w = 0)
{
    return (x + y + z + w);
}
int sum(int x, int y, float z = 0, float w = 0)
{
    return (x + y + z + w);
}
// Driver Code
int main()
{
//  cout << sum(10, 15) << endl;  this statement is ambiguous since the compiler does not know where to go
    cout << sum(10, 15, 25) << endl;
    cout << sum(10, 15, 22.25f) << endl;  //it goes to 2nd function still answer in integer as {return int}
    // 2.25f specified for float , else it will be considered double and again it will give ambiguous error.
    cout << sum(10, 15, 25, 30) << endl;
    return 0;
}
