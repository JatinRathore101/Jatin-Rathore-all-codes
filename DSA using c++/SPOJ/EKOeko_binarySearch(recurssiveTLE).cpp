#include<bits/stdc++.h>
using namespace std;

// Gives TLE

long long MaxHeiRecur(vector<long long> &heights,long long M,long long N,long long left,long long right)
{
    if(left>right){return -1;}
    long long mid=left+(right-left)/2,m=M;
    for(auto it:heights){if(it>mid){m-=it-mid;}}

    long long y=MaxHeiRecur(heights,M,N,mid+1,right);
    if(m<=0){return max(mid,y);}

    return MaxHeiRecur(heights,M,N,left,mid-1);
}

long long maxH(vector<long long> &heights,long long M,long long N)
{
    long long left=0,right=0;
    for(auto it:heights){right=max(right,it);}

    return MaxHeiRecur(heights,M,N,left,right);
}

int main()
{
    long long N,M;cin>>N>>M;
    vector<long long> heights;
    for(int i=0;i<N;i++){long long x;cin>>x;heights.push_back(x);}
    cout<<maxH(heights,M,N);
    return 0;
}

