#include<iostream>
using namespace std;

/*
  call by value and call by refrence in C++
*/

void swap1(int a,int b)   // will not swap a and b
{int temp=a;a=b;b=temp;}

void swap2(int &a,int &b) // will swap a and b using refrence variables
{int temp=a;a=b;b=temp;}

void swap3(int* a,int* b)  // will swap a and b using pointer refrence
{int temp=*a;*a=*b;*b=temp;}


int main()
{
    int a=5,b=7;

    cout<<"Orignal value of a and b are : a = "<<a<<" , b = "<<b<<endl;
    swap1(a,b);
    cout<<"value of a and b after passing through swap1 are : a = "<<a<<" , b = "<<b<<endl;
    cout<<"Actually swap1 does not changes values of actual a,b , it just swaps formal a,b which just copy values from actual ones"<<endl;
    swap2(a,b);
    cout<<"value of a and b after passing through swap2 are : a = "<<a<<" , b = "<<b<<endl;
    swap3(&a,&b);
    cout<<"value of a and b after passing through swap3 are : a = "<<a<<" , b = "<<b<<endl;
    cout<<"Actually swap3 has worked fine the values are again swapped after once getting swapped by swap2"<<endl;

    // int x=10, &y=x;
    // cout<<x<<"  "<<y; // y is now another name of x , further discussing return by refrence

    // RETURN BY REFRENCE NOT DONE

    return 0;
}
