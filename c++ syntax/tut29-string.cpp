#include<iostream>
using namespace std;

// string str("Jatin Rathore"); a syntax to declare a string

/*
  string st1; string is a datatype to declare a string,
  to apply functions over string we include <string> header file.

  An string is different from character array
      - A character array is terminated by \0
      - The size of the character array has to be allocated
        statically, more memory cannot be allocated at run
        time if required. Unused allocated memory is wasted
        in the case of the character array. In the case of
        strings, memory is allocated dynamically. More memory
        can be allocated at run time on demand. As no memory
        is preallocated, no memory is wasted.





  C++ has in its definition a way to represent a sequence of
  characters as an object of the class. This class is called
  std:: string. String class stores the characters as a sequence
  of bytes with the functionality of allowing access to the
  single-byte character.


*/

// By default all members in a class are private

class binary
{
    string s; // private variables can only be accessed through public functions
    void chk_bin(); // private function can only be accessed through public functions
public:
    void read();
    void ones_compliment();
    void display();
};



void binary ::read()
{
    cout<<"Enter a binary number :\t";
    cin>>s;
    chk_bin();
}



void binary ::chk_bin()//at() in string takes argument of index
{
    for(int i=0;i<s.length();i++)
        {
            if ((s.at(i)!='0')&&(s.at(i)!='1'))
                {
                    cout<<"\n\nNot Binary --> Aborting\n\n";
                    exit(0);
                }
        }
}



void binary ::ones_compliment()
{
    for(int i=0;i<s.length();i++)
        {
            if (s.at(i)=='0')
                {s.at(i)='1';}
            else
                {s.at(i)='0';}
        }
}



void binary ::display()
{
    for(int i=0;i<s.length();i++)
        {
            cout<<s.at(i);
        }
}


int main()
{
    binary b1;
    b1.read();
    cout<<"\nThe number you entered is :\t";
    b1.display();
    b1.ones_compliment();
    cout<<"\n\nThe ones compliment of the number is :\t";
    b1.display();
    cout<<"\n\n\n";
    return 0;
}
