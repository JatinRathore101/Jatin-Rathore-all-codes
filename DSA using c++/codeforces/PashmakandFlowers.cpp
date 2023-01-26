#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;cin>>n;
    vector<long long> b(n);
    for(long long i=0;i<n;i++){cin>>b[i];}
    sort(b.begin(),b.end());

    if(b[0]==b[n-1])
    {
        cout<<b[n-1]-b[0]<<" "<<(n*(n-1))/2; // This exception condition was where the logic was failing. I never thaught of a case when beauty diference is zero.
    }
    else
    {
        long long A=1,B=1;
        for(long long i=1;i<n;i++){if(b[i]!=b[0])break;A++;}
        for(long long i=n-2;i>=0;i--){if(b[i]!=b[n-1])break;B++;}
        cout<<b[n-1]-b[0]<<" "<<A*B;
    }
    return 0;
}

