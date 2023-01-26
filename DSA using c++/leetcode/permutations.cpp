#include<bits/stdc++.h>
using namespace std;

/*Permutations*/

int main()
{
    int n;cin>>n;
    vector<string> nums(n);
    for(int i=1;i<=n;i++){nums.push_back(to_string(i));}
    cout<<endl;
    for(auto it:nums){cout<<it<<"  ";}
    return 0;
}

