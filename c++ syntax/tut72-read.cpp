#include<iostream>
#include<fstream>
#include<limits>
using namespace std;

// in last program we link or stream or buffer from program to file tut71.txt
// in this program we will read that existing file.

int main()
{
    string A;
    // Opening files using constructor and reading it
    ifstream cablex("tut71.txt"); // Read operation
    // cablex>>A; this will also read character from file and store it to string A but only the first word // breaks at spaces and newline
    getline(cablex, A); // when we wish to input character line from console(entered to console by user) into the program, we use cin stream with getline() function and store that line to some declared string say str, syntax --> // getline(cin,str); //
    cout<<A;
    // To further read the file we can use same syntax and it will store next line to A, remember to change line in console
    cout<<"\n";
    getline(cablex, A);
    cout<<A;
    cout<<"\n";
    getline(cablex, A);
    cout<<A;
    cout<<"\n";
    getline(cablex, A); // since our txt file has only three lines this getline for fourth line will repeat give line 3 from file
    cout<<A;
    cout<<"\n";
    getline(cablex, A);
    cout<<A;
    cout<<"\n";
    getline(cablex, A);
    cout<<A<<"\n\n";
    cablex.close();





    ifstream fin("tut71.txt"); // created another stream to read file , this will again read file from beginning
    for(int i=0;i<3;i++)
    {
        getline(fin, A);
        cout<<A;
        cout<<"\n";
    }
    fin.close();


    return 0;
}

