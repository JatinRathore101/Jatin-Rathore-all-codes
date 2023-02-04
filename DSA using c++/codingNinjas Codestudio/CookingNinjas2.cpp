#include<bits/stdc++.h>
using namespace std;

vector<int> Total_Dishes_by_Rank(int mid)
{
    vector<int> tdbr;

    for(int i=0;i<10;i++)
    {
        int j=100;
        float N=0;
        while(j>0)
        {
            N=sqrt((2*mid)/(i+1)-N);
            j--;
        }

        int n=N;tdbr.push_back(n);
    }
    return tdbr;
}

int MCT_Recur(vector<int> &rank,int m,int left,int right)
{
    if(left>right){return -1;}
    int mid=left+(right-left)/2;
    vector<int> tdbr=Total_Dishes_by_Rank(mid);

    int M=m;
    for(auto it:rank){M-=tdbr[it-1];}

    if(M<=0)
    {
        int y=MCT_Recur(rank,m,left,mid-1);
        if(y>0&&y<mid){return y;}
        return mid;
    }
    return MCT_Recur(rank,m,mid+1,right);
}

int minCookTime(vector<int> &rank, int m)
{
    int n=rank.size();
    int x=m/n;
    int left=x*(x+1);left/=2;
    x++;
    int right=5*x*(x+1);
    return MCT_Recur(rank,m,left,right);
}

int main()
{
    int n,m;cin>>n>>m;
    vector<int> rank;
    for(int i=0;i<n;i++){int x;cin>>x;rank.push_back(x);}
    cout<<endl<<minCookTime(rank,m);
    return 0;
}
