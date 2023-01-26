#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0,j=0,k=0,n;
    cin>>n;
    for(int m=0;m<n;m++)
    {
        int x,y,z;
        cin>>x;i+=x;
        cin>>y;j+=y;
        cin>>z;k+=z;
    }
    if(i==0&&j==0&&k==0){cout<<"YES";}else{cout<<"NO";}
    return 0;
}

