#include<bits/stdc++.h>
using namespace std;

bool ISARRAYSORTED1(int a[],int left,int right)
{
    if(left>=right){return 1;}
    else if(left==right-1){return a[left]<=a[right];}

    int mid=left+(right-left)/2;
    if(a[mid]>=a[mid-1]&&a[mid]<=a[mid+1])
    {
        return ISARRAYSORTED1(a,left,mid)*ISARRAYSORTED1(a,mid+1,right);
    }

    return 0;
}

bool isArraySorted1(int a[],int n)
{
    int left=0,right=n-1;

    return ISARRAYSORTED1(a,left,right);
}

bool isArraySorted2(int a[],int n)
{
    if(n<=1){return true;}
    else if(a[0]>a[1]){return false;}

    return isArraySorted2(a+1,n-1);
}

int main()
{
    int a[100];
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<endl<<isArraySorted1(a,n);
    cout<<"  "<<isArraySorted2(a,n);
    return 0;
}

