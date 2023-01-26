#include<bits/stdc++.h>
using namespace std;

/*
// NAive

pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
	int i=0,j=n-1,mid;
    while(true)
    {
        mid=i+(j-i)/2;
        if(arr[mid]==x){break;}
        else if(arr[mid]>x){j=mid-1;}
        else if(arr[mid]<x){i=mid+1;}
        else if(i>j){return {-1,-1};}
    }
    i=mid;
    j=mid;
    while(arr[i-1]==x&&i>0){i--;}
    while(arr[j+1]==x&&j<n-1){j++;}
    return {i,j};
}

*/

pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
    int i=0,j=n-1,mid,start=-1,End=-1;
    while(i<=j)
    {
        mid=i+(j-i)/2;
        if(arr[mid]>=x){j=mid-1;if(arr[mid]==x)start=mid;End=start;}
        else if(arr[mid]<x){i=mid+1;}
    }
    i=0;
    j=n-1;
    while(i<=j)
    {
        mid=i+(j-i)/2;
        if(arr[mid]<=x){i=mid+1;if(arr[mid]==x){End=mid;}}
        else if(arr[mid]>x){j=mid-1;}
    }
    return {start,End};
}

/*

int firstoccur(vector<int> &arr,int n,int x)
{
   int start = 0;
   int end = n - 1;
   int ans = -1;
   while(start <= end)
   {
       int mid = start + ((end - start)/2);
       if(arr[mid] == x)
       {
           ans = mid;
           end = mid-1;
       }
       else if(arr[mid] > x)
       {
           end = mid -1;
       }
       else
       {
           start = mid + 1;
       }
   }
   return ans;
}
int lastoccur(vector<int> &arr,int n,int x)
{
   int start = 0;
   int end = n - 1;
   int ans = -1;
   while(start <= end)
   {
       int mid = start + ((end - start)/2);
       if(arr[mid] == x)
       {
           ans = mid;
           start = mid+1;
       }
       else if(arr[mid] > x)
       {
           end = mid -1;
       }
       else if(arr[mid] < x)
       {
           start = mid + 1;
       }
   }
   return ans;
}
pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
pair<int,int> result;
   result.first = firstoccur(arr,n,x);
   result.second = lastoccur(arr,n,x);
   return result;
}

*/

int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){int x;cin>>x;a[i]=x;}
    int y;cin>>y;
    pair<int, int> p = findFirstLastPosition(a,n,y);
    cout<<endl<<p.first<<"  "<<p.second;
    return 0;
}
