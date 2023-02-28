#include<bits/stdc++.h>
using namespace std;

// (a to the power b) modulo c // (a^b)%c
long long CPuR(long long a,long long b,long long c)
{
    if(b==0){return 1;}
    if(b==1){return a;}

    if(c==-1){c=LLONG_MAX;}
    a%=c;

    if(b%2==0){return CPuR((((a%c)*(a%c))%c),b/2,c);}
    else {return (((a%c)*((CPuR(a,--b,c))%c))%c);}
}

int main()
{
    long long a,b,c;// enter c = -1 to get actual a^b //
    cin>>a>>b>>c;
    cout<<CPuR(a,b,c);
    return 0;
}

