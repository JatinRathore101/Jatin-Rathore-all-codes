#include<bits/stdc++.h>
using namespace std;

/*
XOR operation (operand ^)
a^a=0;
a^0=a;
a^b^c^c^d^b^a^d=0
a^b^c^c^d^b^a=d
a^b^c^c^d^b^d=a
a^c^c^d^b^a^d=b
*/

int findUnique(int *arr, int size)
{
    unordered_map<int,int> m;
    for(int i=0;i<size;i++)
    {m[arr[i]]++;}
    for(auto it:m)
    {if(it.second==1)return it.first;}
}

int findUniqueUsingXOR(int *arr, int size)
{
    int uniqu=0;
    for(int i=0;i<size;i++){uniqu=uniqu^arr[i];}
    return uniqu;
}


int main()
{
    int t;cin>>t;
    int uniq[t];
    for(int i=0;i<t;i++)
    {
        int n;cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            int x;cin>>x;
            a[j]=x;
        }
        uniq[i]=findUniqueUsingXOR(a,n);
    }

    for(auto it:uniq)
    {
        cout<<endl<<it;
    }
    return 0;
}
