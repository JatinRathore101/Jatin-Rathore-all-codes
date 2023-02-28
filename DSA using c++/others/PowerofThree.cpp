#include<bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n)
{
    int x=1;
    for(int i=1;i<=20;i++)
    {
        if(n==x){return true;}
        if(n<x){break;}
        x*=3*1LL;
    }
    return false;
}

int main()
{
    int n;cin>>n;
    cout<<::boolalpha<<isPowerOfThree(n);
    return 0;
}
