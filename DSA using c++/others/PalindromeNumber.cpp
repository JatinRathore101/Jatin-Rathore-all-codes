#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{   if(x<0){return false;}
    int y=0,z=x;
    while(x!=0)
    {
        y*=10*1LL;
        y+=x%10;
        x/=10;
    }
    if(y==z){return true;}
    return false;
}

int main()
{
    int x;cin>>x;
    cout<<::boolalpha<<isPalindrome(x);
    return 0;
}

