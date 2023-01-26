#include<bits/stdc++.h>
using namespace std;

/*
C++ STL inbuilt sort and comparator function:-
Comparator function are boolean functions take two element of
series(arrays, vector<>, nested vector<<>> etc) and swaps them
in desired manner. This function can also be passed as an
argument to the sort() function, to modify default sorting
behaviour.
If returns 0 to sort => swap.
If returns 1 to sort => don't swap.
*/
bool cmp(pair<int,int>,pair<int,int>);

int main()
{
    int n;cin>>n;
    vector<pair<int,int>> v_p(n);
    for(int i=0;i<n;i++)
    {
        cin>>v_p[i].first>>v_p[i].second;
    }

    sort(v_p.begin(),v_p.end(),cmp);

    cout<<endl<<endl;
    for(auto it:v_p)
    {
        cout<<it.first<<"  "<<it.second<<endl;
    }
    return 0;
}

bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.first!=b.first)
    {
        return a.first<b.first;// if this condition is false then a and b will be swapped
    }return a.second>b.second;

}
