#include<bits/stdc++.h>
using namespace std;

// GFG // Search an element in a sorted and rotated Array

/*

Given a sorted and rotated array arr[] of size N and a key, the task is to find the key in the array.

Note: Find the element in O(logN) time and assume that all the elements are distinct.

Example:  

    Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}, key = 3
    Output : Found at index 8

    Input  : arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}, key = 30
    Output : Not found

    Input : arr[] = {30, 40, 50, 10, 20}, key = 10
    Output : Found at index 3

*/

int RotatedBinarySearch(vector<int> &a,int k) // return -1 is element not found
{
    // sorted rotated array //  c----da------b  //  a <= b <= c <= d

    /*
    The idea is to find the pivot point, divide the array into two sub-arrays
    and perform a binary search.

    The main idea for finding a pivot is – 

    For a sorted (in increasing order) and rotated array, the pivot element is
    the only element for which the next element to it is smaller than it.

    some people consider smallest ie. a as pivot , others take largest ie. d as pivot

    here we considering a as pivot {smallest element's index}

    */

    int i=0,j=a.size()-1,mid,pivot=-1;
    while(true)
    {
        mid=i+(j-i)/2;
        if(a[mid]<a[mid-1]){pivot=mid;break;}
        else if(a[mid]>=a[i]){i=mid+1;}
        else if(a[mid]<=a[j]){j=mid-1;}
        if(i==j&&a[mid]>a[mid-1]){break;}
    }
    if(pivot==-1){return -1;}
    if(a[0]<k){i=0;j=pivot-1;}
    else if(a[a.size()-1]>k){i=pivot;j=a.size()-1;}

    while(true)
    {
        mid=i+(j-i)/2;
        if(a[mid]==k){pivot=mid;break;}
        else if(a[mid]>k){j=mid-1;}
        else if(a[mid]<k){i=mid+1;}
        if(i>j){pivot=-1;break;}
    }
    return pivot;

}

int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        a[i]=x;
    }
    int k;cin>>k;
    int y=RotatedBinarySearch(a,k);
    cout<<endl<<y<<endl;
    return 0;
}

