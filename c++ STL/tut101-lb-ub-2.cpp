#include<bits/stdc++.h>
using namespace std;

/*
Remember sorting is compulsory for implementing lower_bound()
and upper_bound() function. We can also find use
upper_bound() and lower_bound() in set. In set sorting is
also not required(presorted inbuilt).

syntax:- set s;
auto it=lower_bound(s.begin(),s.end(),value); // slow O(n)
auto it=s.lower_bound(value); // fast O(log(n))
*/

int main()
{
    int n;cin>>n;
    set<int> s;
    map<int,int> m;

    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        s.insert(x);
    }

    cout<<endl<<endl;
    for(int i=0;i<10;i++)
    {
        int y=rand()%(s.size());
        auto it=s.begin();
        while(y--){it++;}
        y=*it;
        it=s.lower_bound(y);
        cout<<"Lower bound of "<<y<<" is "<<*it<<endl;;
    }
    return 0;
}

