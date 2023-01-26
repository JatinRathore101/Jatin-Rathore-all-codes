#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,w,sum=0;cin>>n>>m>>a>>b;w=n/m;
    double A,B;A=a;B=double(b)/m;//cout<<"A = "<<A<<"   B = "<<B;
    if(A<B){sum+=n*a;}
    else
    {
        sum+=w*b;
        if(a*(n%m)>b){sum+=b;}
        else{sum+=a*(n%m);}
    }
    cout<<sum;
    return 0;
}

