#include<bits/stdc++.h>
using namespace std;

int countDistinctWays(int nStairs)
{
    if(nStairs==0){return 0;}
    else if(nStairs==1){return 1;}
    else if(nStairs==2){return 2;}
    else{return countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);}
}

// 0 <= nStairs <= 100000 //
int main()
{   int nStairs;cin>>nStairs;
    cout<<countDistinctWays(nStairs);
    return 0;
}

