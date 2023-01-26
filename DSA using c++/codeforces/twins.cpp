#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;cin>>n;
    multiset<int> s;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        s.insert(x);
        sum+=x;
    }
    int i=0,subsum=0;
    if(sum%2==1){sum++;}
    for(auto it:s)
    {
        subsum+=it;
        if(subsum>=sum/2){break;}
        i++;
    }
    cout<<n-i;
    return 0;
}

