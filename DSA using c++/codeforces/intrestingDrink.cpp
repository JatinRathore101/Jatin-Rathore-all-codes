#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int>&s,int x)
{
    int left=0,right=s.size()-1;
    while(right>=left)
    {
        int mid=(left+right)/2;
        if(s[mid]<=x)
        {
            if(mid==s.size()-1)
            {
                return mid;
            }
            else if(s[mid+1]>x)
            {
                return mid;
            }
            else
            {
                left=mid+1;
            }
        }
        else
        {
            if(mid==0){return -1;}
            else if(s[mid-1]<=x){return mid-1;}
            else {right=mid-1;}
        }
    }

    return -1;
}

int main()
{
    int n;cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;i++){cin>>s[i];}
    sort(s.begin(),s.end());

    int q;cin>>q;
    vector<int> c(q);
    for(int i=0;i<q;i++){cin>>c[i];}
    //cout<<endl;for(auto it:s){cout<<it<<"  ";}cout<<endl;

    for(int i=0;i<c.size();i++)
    {
        int mid=binarysearch(s,c[i]);
        cout<<mid+1<<endl;
    }
    return 0;
}

