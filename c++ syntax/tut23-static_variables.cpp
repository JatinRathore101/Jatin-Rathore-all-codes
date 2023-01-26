#include <iostream>
using namespace std;

// Static variables in a Function

void demo()
{
    static int a = 0; // static variable => this statement will be used only for once throughout the program execution
                      // Value is updated and will be carried to next function calls.
                      // Basically the value of a will be retained.
                      // Function forgets all variables after one execution, only static variables are those which it
                      // does not forgets.
    cout << a << "   ";
    a++;
}

int main()
{
    for (int i=0; i<5; i++)
        demo();
        cout<<endl<<endl;
    return 0;
}
