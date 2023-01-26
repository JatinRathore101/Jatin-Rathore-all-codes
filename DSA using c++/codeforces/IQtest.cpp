#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
        a[i-1]=x%2;
    }
    int common;
    if(a[0]==a[1]||a[0]==a[2]){common=a[0];}else common=a[1];
    int i=1;
    for(auto it:a){if(it!=common){common=i;break;}i++;}
    cout<<common;
    return 0;
}

