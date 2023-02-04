#include<bits/stdc++.h>
using namespace std;

//

int modularExponentiationTC(int x, int n, int m)
{
    int y=1;
    while(n>0)
    {
        if(n%2==0)
        {
            n/=2;
            x=(1LL*(x%m)*(x%m))%m; // type casting to remove error at extreme cases //  *1LL  //
          }
        else
        {
            y=(1LL*(y%m)*(x%m))%m; // type casting to remove error at extreme cases //  *1LL  //
            n-=1;
        }
    }
    return y%m;
}

//

int modularExponentiation(int x, int n, int m)
{
    int y=1;
    while(n>0)
    {
        if(n%2==0)
        {
            n/=2;
            x=((x%m)*(x%m));
        }
        else
        {
            y=((y%m)*(x%m));
            n-=1;
        }
    }
    return y%m;
}

int main()
{
    int x,n,m;cin>>x>>n>>m;
    cout<<endl<<modularExponentiation(x,n,m)<<endl;
    return 0;
}

