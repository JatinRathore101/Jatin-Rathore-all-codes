#include<bits/stdc++.h>
using namespace std;

/*
When we insert a pair to the map, since map is by default
sorted, do each key is compared from all existing keys.
In case of integer keys that is not a problem, but if we
have strings as keys then new inserted string of the pair
will be compared with all existing keys and the time
complexity then for that insertion becomes
(str.size())*(log(map_name.size()))
*/

/*
Given N strings, print unique strings in lexicographical
order with their frequency.
 N  <= 10^5
|S| <= 100
*/

int main()
{
    // for lexicographical ordering we need sorting
    // for frequency counting we need no duplicacy
    // map fulfills both aspects.
    // unordered map only take cares about no duplicacy but is not sorted.
    // multimap is sorted but it allows duplicacy

    map<string,int> m;
    int N;cin>>N;string s;
    for(int i=0;i<N;i++)
    {
        cin>>s;
        m[s]++;
    }
    cout<<"\n\n";
    for(auto it:m)
    {
        cout<<it.first<<"  "<<it.second<<"\n\n";
    }
    return 0;
}

/*
Similarly we can find frequency of numbers
like map<int,int> or map<long long,int> etc.
*/
