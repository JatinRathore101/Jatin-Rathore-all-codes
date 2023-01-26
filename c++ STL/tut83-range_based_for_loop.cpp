#include<bits/stdc++.h>
using namespace std;
// range based loops
int main()
{
    vector<int> v={2,3,4,5,6};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"  ";
    }cout<<endl;

    vector<int> ::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<"  ";
    }cout<<endl;

    for(int v1:v) // v1 is copy of element of v one by one
    {
        cout<<v1<<"  ";
    }cout<<endl;

    for(int v2:v)
    {
        v2++; //copy (by value) // not by reference // no actual change in value
    }for(int v3:v)
    {
        cout<<v3<<"  ";
    }cout<<endl;

    for(int &v4:v)
    {
        v4++; //copy (by value) // not by reference // no actual change in value
    }for(int v5:v)
    {
        cout<<v5<<"  ";
    }cout<<endl;

    vector<pair<int,int>> vp={{1,2},{3,4},{5,6}};
    for(pair<int,int> &vpc:vp) // use call by reference wherever possible // it is faster
    {
        cout<<vpc.first<<"  "<<vpc.second<<endl;
    }
    return 0;
}

