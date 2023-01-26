#include<iostream>
#include<fstream>
using namespace std;

// file I/O // we need certain predefined classes to perform I/O operations, which we can find in <fstream>

// this program is based on writing over a text file from program by creating object of // ofstream // class

/*
usful classes for I/O operation in <fstream> are
fstreambase --> a base class
ifstream    --> derived class from fstreambase // input from file to program // reading a file
ofstream    --> derived class from fstreambase // output from program on file // writing on a file

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
 Using the constructor
 Using the member function open() of the class

*/


int main()
{
    string st = "Jatin Rathore IITM"; // string datatype is also defined under file <iostream>
    // Opening files using constructor and writing it
    ofstream Jatin_out("tut71.txt");
    /* ofstream Jatin_out("tut71.txt") will create a stream from
    program->file tut71.txt // if file tut71.txt does not exist
    this command will create a file with that name and then setup
    the respected stream // Jatin_out is an object of
    class ofstream, "tut71.txt" is passed as argument to its
    constructor, its constructor creates a // stream or data_buffer //
    which can flow from program->file */

    Jatin_out<<st; /* Write operation // just like // cout<< //
    writes from program to console // our created object Jatin_out
    writes from program to file. */

    Jatin_out<<"\nIITM stands for Indian Institute of Technology Madras";
    Jatin_out<<"\n"<<1246.1165+700.1111;

    Jatin_out.close();
    return 0;
}

