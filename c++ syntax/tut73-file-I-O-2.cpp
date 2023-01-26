#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string A;
    ofstream fout("tut73.txt");
    int i=0;
    cout<<"Type <done_writing> for stoping output from program to txt file\n\n";
    while(true)
    {
        i++;
        cout<<"Enter line number : "<<i<<"   ";
        getline(cin,A); // input from console to program
        if(A.compare("done_writing")==0)
        {
            break;
        }
        fout<<A<<"\n";
    }
    fout.close();



    A.clear();
    // out fine now has i lines;
    cout<<"\n\nContents of the file are : \n";
    ifstream fin("tut73.txt");
    while(fin.eof()==0)  // obj.eof() // end of file function returns 1 if end of file is reached while reading with stream obj , else it keeps returning 0;
    {
        getline(fin,A);
        cout<<A<<"\n";
    }
    cout<<"\n\n";


    return 0;
}

