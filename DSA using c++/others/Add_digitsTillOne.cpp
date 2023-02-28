#include<bits/stdc++.h>
using namespace std;

/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.



Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2
Since 2 has only one digit, return it.

Example 2:

Input: num = 0
Output: 0



Constraints:

    0 <= num <= 231 - 1

*/

int addDigits(int num)
{

    while(num>9)
    {   int y=0;
        while(num>0)
        {
            y+=num%10;
            num/=10;
        }
        num=y;y=0;
    }
    return num;
}

int main()
{
    int x;cin>>x;
    cout<<addDigits(num);

    return 0;
}
