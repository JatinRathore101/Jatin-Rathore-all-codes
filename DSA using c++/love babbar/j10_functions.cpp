#include<bits/stdc++.h>
using namespace std;

bool isEven(int n)
{
    if(n&1)// if last bit of binary of n is 1 => n is odd, then n&1 is true
    {
        return 0;
    }
    return 1;
}

long long nCr(int n,int r)
{
    int j=min(r,n-r);
    long long Nr=1,Dr=1;

    for(int i=1;i<=j;i++)
    {
        Nr*=n-i+1;
        Dr*=i;
    }
    return Nr/Dr;
}

int main()
{
    int n,r;cin>>n;
    bool x=isEven(n);
    cout<<::boolalpha<<x; //   :: boolalpha prints false for 0 and true for 1

    cin>>r;
    cout<<"\ncombinations = "<<nCr(n,r);
    return 0;
}

