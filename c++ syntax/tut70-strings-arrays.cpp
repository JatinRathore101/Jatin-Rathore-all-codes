#include<iostream>
#include<string>
#include<limits>
using namespace std;

// understanding strings and array
// Array is continous allocated, set of any datatype, which has a preknown length, size of array must be specified by programmer or entered by user before declaration of array

// character arrays same as strings but are statically declared,  size of array must be specified by programmer or entered by user before declaration
// Declaration of character arrays
// type 1 // char A[100];
// type 2 // cin>>n; char A[n];
// type 3 // cin>>n; char *A= new int(n);

// strings are special type of 1D arrays which are set of characters, they are terminated by a special character '\0' v
// strings are declared as // string // datatype, there re list of function to be performed on strings in headerfile <string>

int main()
{

    // syntax 1
    string A;
    cout<<"enter string as {Jatin Rathore IITM} to see result\n";
    cin>>A;
    cout<<"Your string is : "<<A<<"\n// even if you enter full sentence, or break line // the cout statement will only show first word;\n\n";

    // syntax 2
    string B(7,'a');
    cout<<B<<" : this is cout of string declared by syntax : string B(7,'a');  \n" ;
    string C(7,'ab');
    cout<<C<<" : this is cout of string declared by syntax : string C(7,'ab');  \n" ;
    string D(7,'ab,#');
    cout<<D<<" : this is cout of string declared by syntax : string D(7,'ab,#'); \n\n" ;


    // syntax 3
    string E="Jatin Rathore IITM";
    cout<<E;


    /*char F[100];                 // This decralation is correct though
    F[100]="Jatin Rathore IITM";   // But initialation if willing to do all at once, should be done along with dec;laration // this syntax is wrong
    or
    F="Jatin Rathore IITM";*/      // similarly this syntax is wrong
    char F[100]="Jatin Rathore IITM";
    cout<<"\n\nsyntax to initialize a character array // char F[100]=''Jatin Rathore IITM''; // can be simply diaplayed using  cout<<F;"<<F<<"\n\n";

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
    cin.ignore(numeric_limits<streamsize>::max(),'\n'); // cin.ignore(numeric_limits<streamsize>::max(),'\n'); after the “cin” statement (here line 23) discards everything in the input stream including the newline. for this we will need to include the header file <limits>
    // syntax 4
    string G;
    cout<<"syntax used // getline(cin,G); // enter a string\n";
    getline(cin,G);
    cout<<"string G is :  "<<G<<"\n\n"; // here in new c++ putline() is not defined simple cout does prints whole line.



    // append() (add at the end)
    string H="fam" , I="ily" ;
    H.append(I);
    cout<<"Joining one string I at the end of another string H by syntax H.append(I);\n"<<H<<"\n\n";

    // concatenation of strings // simple + operator
    H="fam";
    cout<<"concatenation of strings // simple + operator\n"<<H+I<<"\n"<<H+I+" lovely"<<"\n"<<I+H+H+I; // H+I-I will give error , _ is not defined with strings
    cout<<"\n"<<H[1];
    cout<<"\n"<<H[-2]; // negative reverse indexing does not works here // though this will not give error but it will give blank
    cout<<"\n"<<(H+I)[5];
    cout<<"\n"<<(H+I+H)[7];
    cout<<"\n"<<"My name is Jatin"[8];
    cout<<"\n\n";


    // str.clear(); // clear function clears whole string;
    I.clear();
    cout<<"after I.clear();\n";
    cout<<I<<"\n"; // will give blank line after // I.clear(); //
    cout<<I+H<<"\n";
    (H+I).clear(); // does not works // does nothing // nor gives error
    cout<<"after (H+I).clear();\n"<<"//H// "<<H<<"\n//H+I// "<<H+I<<"\n//I+H// "<<I+H<<"\n";



    // compare() gives zero if two strings are exactly same // gives +ve integer if first string comes are farther alphbetical order and vice versa
    H="ABC";
    I="abc";
    string J="xyz",K="abcd",L="abc";
    cout<<"\n"<<I.compare(L);
    cout<<"\n"<<H.compare(H);
    cout<<"\n"<<I.compare(J);
    cout<<"\n"<<J.compare(I);
    cout<<"\n"<<K.compare(J);
    cout<<"\n"<<I.compare(K)<<"\n";
    // above result gives us // "abc" < "xyz" // "abcd" < "xyz" // "abc" < "abcd" //



    // str.empty() // checking if string is empty // verification purpose
    cout<<"\n"<<I;
    I.clear();
    if(I.empty()){cout<<"\nstring is empty";}
    cout<<"\n";



    // erase function // deletes one or more characters from string and shifts the right substring to that vacancy
    H="My name is Lakhan";
    cout<<"\n"<<H;
    H.erase(15,2);
    cout<<"\n"<<H;
    H.erase(2,8);
    cout<<"\n"<<H<<"\n";



    // str.find() // finds substring and returns first index of substring if found // else returns garbage value
    I="Jatin eats grass";
    cout<<"\n"<<I;
    cout<<"\n"<<I.find("grass");
    cout<<"\n"<<I.find("burger")<<" garbage"<<"\n";



    // insert a substring to existing string
    cout<<"\n"<<I;
    I.insert(6,"in IIT Madras ");
    cout<<"\n"<<I<<"\n";



    // length() or size() of string
    cout<<"\n"<<I.length();  // see the syntax
    cout<<"\n"<<I.size()<<"\n\n";    // see the syntax
    // this str.length() or str.size is generally used to run loop over a string;



    // STRING TO INTEGER // stoi() converts numeric string to integer // for that perticular use
    H="111";
    int x=stoi(H);
    cout<<x/3<<"\n\n";



    // TO STRING // to_string() // works on multiple datatypes, most commonly on int and float // for that perticular use
    int a=101;
    float b=12.20;
    cout<<"\n"<<"a+11 = "<<a+11;
    cout<<"\n"<<"concatenation after to_string "<<to_string(a)+"11";
    cout<<"\n"<<"b+11 = "<<b+11;
    cout<<"\n"<<"float to string b :   "<<to_string(b);
    cout<<"\n"<<"concatenation after to_string "<<to_string(b)+"11"<<"\n\n\n";
    // further for sorting the string we can include header file <algorithm>

    return 0;



}

