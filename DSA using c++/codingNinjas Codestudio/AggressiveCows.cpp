#include<bits/stdc++.h>
using namespace std;

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int n=stalls.size(),an=0;
    int i=0,j=stalls[n-1]-stalls[0],mid;

    while(i<=j)
    {
        mid=i+(j-i)/2;
        int c=k,a1=0,a2=1;

        c--;
        while(c>0)
        {
            if(stalls[a2]-stalls[a1]>=mid)
            {
                c--;a1=a2;
            }
            a2++;

            if(a2==n){break;}
        }

        if(c==0&&mid>an)
        {an=mid;i=mid+1;}
        else
        {j=mid-1;}
    }
    return an;
}

int main()
{
    int t;cin>>t;
    vector<int> ans;
    while(t>0)
    {
        int N,k;
        cin>>N>>k;
        vector<int> A;
        while(N>0)
        {
            int x;cin>>x;
            A.push_back(x);
            N--;
        }

        int y=aggressiveCows(A,k);
        ans.push_back(y);
        t--;
    }
    for(auto it:ans){cout<<endl<<it;}
    return 0;
    //cout<<"  i = "<<i<<"     j = "<<j<<"     mid = "<<mid<<"     an = "<<an<<endl;

}

