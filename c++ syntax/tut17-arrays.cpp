#include<iostream>
using namespace std;
// arrays in C++
int main()
{
    int A[]={5,2,-3,9,-7};  // Easiest way to initialize an array
    cout<<A[3]<<endl<<endl;;
    // Array can be modified given it in not const
    A[4]+=8;
    int i=0;

    do{cout<<A[i]<<"  ";i++;}while(i<5);

    /* A property of arrays is that the name of the address
       alone represents the address of its first element
           &A[0] = A    */

           cout<<"\n\nThe value of A = "<<A<<endl;
           cout<<"The value of &A[0] = "<<&A[0]<<endl;
           cout<<"The value of A[0] = "<<A[0]<<endl;
           cout<<"The value of *A = "<<*A<<endl;
           cout<<"The value of A[1] = "<<A[1]<<endl;
           int* b=A;
           /* now pointer b holds address of A[0]
              Similarly ++b holds address of A[1]
              and b+2 (after increment) now holds
              address of A[3] and so on.
           */

           /* pointer arithmatic basic formula
              address_new = address_old + i*size_of_datatype
           */

           cout<<"The value of *(b++) = "<<*(b++)<<endl;
           cout<<"The value of *(b) = "<<*(b)<<endl;
           cout<<"The value of *(++b) = "<<*(++b)<<endl;
           cout<<"The value of *(b+2) = "<<*(b+2)<<endl;
    return 0;
}
