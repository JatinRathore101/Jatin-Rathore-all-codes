#include<bits/stdc++.h>
using namespace std;

bool checkPerfectNumber(int num)
{
    int d=num;
    for(int i=1;i<=d/2;i++)
    {
        if(d%i==0){num-=i;}
    }
    if(num==0){return true;}
    return false;
}

int main()
{
    int num;cin>>num;
    cout<<::boolalpha<<checkPerfectNumber(num);
    return 0;
}

/*
A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.

Given an integer n, return true if n is a perfect number, otherwise return false.



Example 1:

Input: num = 28
Output: true
Explanation: 28 = 1 + 2 + 4 + 7 + 14
1, 2, 4, 7, and 14 are all divisors of 28.

Example 2:

Input: num = 7
Output: false



Constraints:

    1 <= num <= 108


*/
