#include<bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m)
{
    vector<int> y;
    int x=0,z=0;

    while(n>0&&m>0)
    {
        x+=a[n-1]+b[m-1];
        y.push_back(x%10);
        x/=10;
        n--;m--;
    }

    while(n>0)
    {
        x+=a[n-1];
        y.push_back(x%10);
        x/=10;
        n--;
    }

    while(m>0)
    {
        x+=b[m-1];
        y.push_back(x%10);
        x/=10;
        m--;
    }

    if(x>0){y.push_back(x%10);}

    reverse(y.begin(),y.end());
    //cout<<endl;for(auto it:y){cout<<it;}
    return y;
}

int main()
{
    int t;cin>>t;
    vector<vector<int>> ans;
    while(t>0)
    {
        int n,m;cin>>n>>m;
        vector<int> a,b;
        for(int i=0;i<n;i++){int x;cin>>x;a.push_back(x);}
        for(int i=0;i<m;i++){int x;cin>>x;b.push_back(x);}

        vector<int> y=findArraySum(a,n,b,m);
        t--;
    }
    return 0;
}
