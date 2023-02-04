#include<bits/stdc++.h>
using namespace std;

int GCD(int x,int y)
{
    int t=max(x,y);
    y=x+y-t;x=t;

    while(y>0)
    {
        t=x%y;
        x=y;
        y=t;
    }
    return x;
}

int GCD_frequency(vector<int>&a)
{
    map<int,int> fr;
    for(auto it:a){fr[it]++;}

    vector<int> v;
    cout<<endl;
    for(auto it:fr){if(it.first==it.second){v.push_back(it.first);cout<<it.first<<" "<<it.second<<endl;}}
    cout<<endl;

    if(v.size()<1){return -1;}
    else if(v.size()==1){return v[0];}

    int y=v[0];

    for(int i=1;i<v.size();i++)
    {
        y=GCD(v[i],y);
    }

    return y;

}

int main()
{
    vector<int> a={1,1,2,3,12,12,12,3,6,6,12,12,4,4,5,6,6,12,12,12,3,3,4,4,6,6,12,12,12,12};

    for(auto it:a)
    {cout<<it<<"  ";}cout<<endl;

    cout<<endl<<GCD_frequency(a);

    return 0;
}

