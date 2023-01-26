#include<iostream>
using namespace std;

// datatype  X   // X stores a value
// datatype*  X  // X stores an address
// &X            // Refrence operator    // gives address of X  // value to be stores in a pointer of X
// *X            // Derefrence operator  // gives value stored at address X

int main()
{
    // Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*ptr<<endl;


    float *p = new float(70.49); // Directly // Dynamically assigns value at pointer p  // {new} kewword
    // delete p;     // will delete the value at pointer p
    cout << "The value at address p is " << *(p) << endl;


    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    // delete[] arr;  // will free the values storesd in array // [] used in front of delete before array name
    cout << "\nThe value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << *(arr+2) <<"\n\n\n";

    return 0;
}

