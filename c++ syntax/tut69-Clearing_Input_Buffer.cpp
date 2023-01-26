#include<iostream>
#include<string>
#include<limits>
using namespace std;

// Clearing The Input Buffer In C++

int main()
{

    // syntax 1
    string A;
    cout<<"enter string as {Jatin Rathore IITM} to see result\n";
    cin>>A;
    cout<<"Your string is : "<<A<<"\n// even if you enter full sentence, or break line // the cout statement will only show first word;\n\n";


/*
Clearing The Input Buffer In C++ => A temporary storage area is
called a buffer.
On various occasions, you may need to clear the unwanted buffer
so as to get the next input in the desired container and not in
the buffer of the previous variable. For example, in the case of
C++, after encountering the “cin” statement, we require to input
a character array or a string, we require to clear the input buffer
or else the desired input is occupied by a buffer of the previous
variable, not by the desired container. On pressing “Enter”
(carriage return) on the output screen after the first input, as
the buffer of the previous variable was the space for a new
container(as we didn’t clear it), the program skips the following
input of the container.
*/


    //how to resolve
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
/*
cin.ignore(numeric_limits<streamsize>::max(),'\n'); after the “cin”
statement (here line 23) discards everything in the input stream
including the newline. for this we will need to include the header
file <limits>
*/


    // syntax 2
    string G;
    cout<<"syntax used // getline(cin,G); // enter a string\n";
    getline(cin,G);
    cout<<"string G is :  "<<G<<"\n\n";
    return 0;



}

