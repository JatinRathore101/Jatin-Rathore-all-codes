#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;cin>>n>>l;
    set<int> lts;vector<int> L;

    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        lts.insert(x);
    }
    for(auto it:lts){L.push_back(it);}
    lts.clear();

    lts.insert(2*L[0]);lts.insert(2*(l-L[L.size()-1]));
    if(L.size()>1)
    {
        for(int i=1;i<L.size();i++)
        {
            lts.insert(L[i]-L[i-1]);
        }
    }
    auto it=lts.end();it--;

    cout.precision(20); // this set precision very very important it was creating error in my submission
    cout << fixed << *it / 2.0 << endl;

    return 0;
}

