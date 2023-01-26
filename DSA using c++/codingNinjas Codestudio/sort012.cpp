#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int> &arr, int n)
{
    int a[3]={0};
    for(int i=0;i<n;i++)
    {
        a[arr[i]]++;
    }
    int i=0;
    while(i<a[0])
    {arr[i]=0;i++;}
    while(i<a[0]+a[1])
    {arr[i]=1;i++;}
    while(i<a[0]+a[1]+a[2])
    {arr[i]=2;i++;}
}

void disp(vector<int> &a)
{
    for(auto it:a)
    {
        cout<<it<<"  ";
    }
}

int main()
{
    int n;cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        a.push_back(x);
    }
    disp(a);
    sort012(a,n);
    cout<<endl<<endl;
    disp(a);
    return 0;
}
