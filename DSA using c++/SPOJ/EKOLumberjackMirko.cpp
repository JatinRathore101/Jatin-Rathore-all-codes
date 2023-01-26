#include<bits/stdc++.h>
using namespace std;

long long MaxH(vector<long long> &h,long long n,long long m)
{
    long long i=0,j=0,mid,an;
    for(auto it:h){j=max(j,it);}

    while(i<=j)
    {
        mid=i+(j-i)/2;
        long long sum=0;

        for(auto it:h)
        {
            if(it>mid){sum+=it-mid;}
        }

        if(sum>=m)
        {
            if(mid>0)
            {an=mid;}
            i=mid+1;
        }
        else
        {
            j=mid-1;
        }
    }
    return an;
}

int main()
{
    long long n,m;
    cin>>n>>m;

    vector<long long> h;
    while(n>0)
    {
        long long x;cin>>x;
        h.push_back(x);
        n--;
    }

    long long y=MaxH(h,n,m);
    cout<<endl<<y;
    return 0;
}

