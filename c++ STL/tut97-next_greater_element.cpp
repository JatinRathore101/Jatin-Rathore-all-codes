#include<bits/stdc++.h>
using namespace std;

/*
NGE -> Next Greater Element
either print NGE of element at its index if no NGE found
print -1 at its index

input
6
4  5  2  25  7  8
output
5  25  25  -1  8  -1

naive NGE     => O(n^2)
efficient NGE => O(n)
*/

vector<int> NGE(vector<int> v);

int main()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    vector<int> nge=NGE(v);
    for(int i=0;i<n;i++)
    {
        cout<<endl<<nge[i];
    }

    return 0;
}

vector<int> NGE(vector<int> v)
{
    vector<int> vr(v.size());
    stack<int> s;int j=0;
    for(int i=0;i<v.size();i++)
    {
        while((!s.empty())&&(v[i]>v[s.top()]))
        {
            vr[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty())
    {
        vr[s.top()]=-1;
        s.pop();
    }
    for(int i=0;i<vr.size();i++)
    {
        if(vr[i]!=-1)
        {
            vr[i]=v[vr[i]];
        }
    }
    return vr;
}
