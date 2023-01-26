#include<bits/stdc++.h>
using namespace std;

/*
unordered set => faster, less time complexity, not sorted;
*/

/*
Given N strings and Q queries, in each query you are given
a string, print YES if that string is present else print NO.
 N   <=10^6
|S|  <=100
 Q   <=10^6
*/

int main()
{
    unordered_set<string> s;
    int N;cin>>N;
    string st;

    for(int i=0;i<N;i++)
    {
        cin>>st;
        s.insert(st); // O(1)
    }

    auto it=s.begin();// just to make auto understand datatype of it.

    int Q;cin>>Q;
    for(int i=0;i<Q;i++)
    {
        cin>>st;
        it=s.find(st); // O(1);
        if(it!=s.end())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

