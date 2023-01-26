#include<bits/stdc++.h>
using namespace std;

// PLEASE READ Const keyword in C++ ARTICLE FROM GFG //

// https://www.geeksforgeeks.org/const-keyword-in-cpp/

int main()
{
    int x1=3;x1=4;


    //const int x2;x2=3; // will give error // const variables are to be initialized during declaration.
    const int x2=3; // x2=4; // not allowed to modify const


    int x3=4;
    const int y3=5;
    const int* p3=&x3;
    x3++;
    // (*p3)++; // this is not allowed
    p3++; // allowed => value of p3 can be changed and even value of x3 can be changed.
    p3=&y3;


    int x4=5;
    int* const p4=&x4;
    // p4++; // this statement is not allowed => now the address atored in p4 cant be modified;
    x4++;
    (*p4)++;// allowed


    int x5=5;
    const int* const p5=&x5;
    x5++;
    // p5++; // not allowed // error: increment of read-only variable
    // (*p5)++; // not allowed // error: increment of read-only location


    const int x6=5;
    //int* const p6=&x6; // not allowed
    const int* const p6=&x6;
    // p6++; // not allowed // error: increment of read-only variable
    // x6++; // not allowed // error: increment of read-only variable
    // (*p6)++; // not allowed // error: increment of read-only location


    return 0;
}

