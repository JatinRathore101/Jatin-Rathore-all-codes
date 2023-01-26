#include<bits/stdc++.h>
using namespace std;


int minCookTime(vector<int> &rank, int m)
{

    int n=rank.size(),i=0,mid,an;

    int j=m/n;
    j++;
    j*=j+1;
    j*=5;

    an=j;

    int count[11]={0};
    for(auto it:rank){count[it]++;}

    while(i<=j)
    {
        mid=i+(j-i)/2;

        int k=1,m1=m;
        while(k<=10)
        {
            int x=(((sqrt(8*(mid/k)+1))-1)/2);
            int y=count[k]*x;

            m1=m1-y;
            k++;
        }

        if(m1<=0&&mid<an){an=mid;j=mid-1;}
        else{i=mid+1;}
    }
    return an;
}


int main()
{
    int t;cin>>t;
    vector<int> ans;
    while(t>0)
    {
        int n,m;cin>>n>>m;
        vector<int> rank;
        while(n>0)
        {
            int x;cin>>x;
            rank.push_back(x);
            n--;
        }


        int y=minCookTime(rank,m);
        ans.push_back(y);
        t--;
    }

    for(auto it:ans)
    {
        cout<<endl<<it;
    }
    return 0;
}

