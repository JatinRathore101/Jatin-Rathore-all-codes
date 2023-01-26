#include<bits/stdc++.h>
using namespace std;

int HCF(int n,int m)
{
   int a=min(n,m),b=max(n,m);
   while(a>0)
   {
       int t=a;
       a=b%a;
       b=t;
   }
   return b;
}

int LCM(int n,int m)
{// LCM(n,m)* HCF(n,m) = n*m ; //

    return n*m/HCF(n,m);
}

int main()
{
    int n,m;cin>>n>>m;
    cout<<"\nHCF of "<<n<<" and "<<m<<" is "<<HCF(n,m);
    cout<<"\nLCM of "<<n<<" and "<<m<<" is "<<LCM(n,m)<<endl;
    return 0;
}

