#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long r,x,y,X,Y,steps=0;cin>>r>>x>>y>>X>>Y;
    double dist=sqrt((x-X)*(x-X)+(y-Y)*(y-Y));
    steps+=dist/(2*r);
    if(dist!=2*r*steps){steps++;}
    cout<<steps;
    return 0;
}

