#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w,h;
    cin>>w>>h;
    int n=w+h,m=998244353,x=2,y=1;

    // ans= (2(w+h))%998244353;


    while(n>0)
    {
        if(n%2==0)
        {
            n/=2;
            x=(1LL*(x%m)*(x%m))%m;
        }
        else
        {
            n--;
            y=(1LL*(y%m)*(x%m))%m; // 1LL* // for type casting to avoid integer overflow
        }
    }
    cout<<y;

    return 0;
}

