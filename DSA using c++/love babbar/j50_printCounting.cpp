#include<bits/stdc++.h>
using namespace std;

void printCounting1(int n)
{
    /*
    TAIL RECURSION
    If the recursive call occurs at the end of a method,
    it is called a tail recursion. The tail recursion is
    similar to a loop. The method executes all the
    statements before jumping into the next recursive
    call.
    */
    cout<<n<<"   ";
    if(n==1){return;}
    printCounting1(n-1);
}

void printCounting2(int n)
{
    /*
    HEAD RECURSION
    */
    if(n==0){return;}
    printCounting2(n-1);
    cout<<n<<"   ";
}

int main()
{
    int n;cin>>n;
    cout<<endl<<"TAIL RECURSION  ";
    printCounting1(n);
    cout<<endl<<endl;
    cout<<"HEAD RECURSION  ";
    printCounting2(n);
    cout<<endl;
    return 0;
}

