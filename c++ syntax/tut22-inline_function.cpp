#include<iostream>
using namespace std;

/*
inline function
When function is very small then we use inline keyword before the
function to replace the function call in main() by actual code
this increases the speed of program.
But when the function is big we don't use inline as then due
to multiple copies of that big function in main() the program
may take very large memory which may even exceed cache memory.
In recursion statements inline function are recommanded not to be used.

*/
inline int produ(int a,int b){return a*b;}
int main()
{int a=2,b=5;
cout<<produ(a,b);

    return 0;
}
