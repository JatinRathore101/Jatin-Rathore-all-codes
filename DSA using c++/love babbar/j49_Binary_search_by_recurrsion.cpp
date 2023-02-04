#include<bits/stdc++.h>
using namespace std;

int RECBINSEARCH(int a[],int left,int right,int x)
{
    if(left>right){return -1;}

    int mid=left+(right-left)/2;

    if(a[mid]==x){return mid;}
    else if(a[mid]<x)
    {
        if(mid<right){return RECBINSEARCH(a,mid+1,right,x);}
        else{return -1;}
    }
    else if(a[mid]>x)
    {
        if(mid>left){return RECBINSEARCH(a,left,mid,x);}
        else{return -1;}
    }
}

int recBinSearch(int a[],int n,int x)
{
    int left=0,right=n-1;
    return RECBINSEARCH(a,left,right,x);
}

int main()
{
    int a[1000],n;
    cin>>n;

    a[0]=10;cout<<10;
    for(int i=1;i<n;i++)
    {
        //cin>>a[i];
        a[i]=a[i-1]+rand()%a[i-1];
        cout<<"  "<<a[i];
    }
    cout<<endl;

    int x;cin>>x;

    cout<<recBinSearch(a,n,x);
    return 0;
}

