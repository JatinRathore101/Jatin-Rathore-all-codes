#include<bits/stdc++.h>
using namespace std;

int tea_pieces(vector<int>&s)
{
    sort(s.begin(),s.end());
    int a=0;if(s.size()<=1){return a;}
    int d=s[0]*2-1;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]%d==0){a+=s[i]/d-1;}
        else{a+=s[i]/d;}
    }
    return a;
}

int main()
{
    int t;cin>>t;
    vector<int> ans;

    while(t!=0)
    {
        int n;cin>>n;
        vector<int> s(n);
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            s[i]=x;
        }
        int y=tea_pieces(s);
        ans.push_back(y);
        t--;
    }

    for(auto it:ans){cout<<it<<endl;}

    return 0;
}

