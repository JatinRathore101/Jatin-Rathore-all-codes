#include<bits/stdc++.h>
using namespace std;

//working week//codeforces

int w_w(int n)
{
    int r=0;
    for(int j=max(n/3-4,4);j<min(n-1,n/3+100);j++)
    {
        r=max(r,min(abs(n+2-2*j),min(abs(j-4),abs(n-2-j))));
    }
    return r;
}

int main()
{
    int t;cin>>t;
    vector<int> ans(t);
    int i=0;
    while(t!=0)
    {
        int n;cin>>n;
        ans[i]=w_w(n);
        i++;
        t--;
    }
    for(auto it:ans){cout<<it<<endl;}

    return 0;
}
