#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={2,4,5,6,7};
    vector<int>::iterator it=v.begin();
    cout<<*v.begin()<<"  "<<(*it)<<"  "<<(++*it)<<"  "<<(*it++)<<"  "<<(*++it)<<"  "<<*it<<"  "<<*(it+1)<<"  "<<(*it);

    vector<pair<int,int>> v_p={{1,2},{3,4},{5,6},{7,8}};
    vector<pair<int,int>> ::iterator it2;
    for(it2=v_p.begin();it2!=v_p.end();++it2)
    {
        cout<<"\n"<<(*it2).first<<"  "<<it2->second;
    }// [ (*it).first => it->first ] and [ (*it).second => it->second ]
    return 0;
}
