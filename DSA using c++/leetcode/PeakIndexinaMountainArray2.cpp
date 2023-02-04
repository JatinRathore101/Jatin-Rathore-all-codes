#include<bits/stdc++.h>
using namespace std;

// using recursion

/*
An array arr a mountain if the following properties hold:

    arr.length >= 3
    There exists some i with 0 < i < arr.length - 1 such that:
        arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
        arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.
*/

int peak(vector<int>& arr,int left,int right)
{
    int mid=left+(right-left)/2;
    if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){return mid;}
    else if(arr[mid]<arr[mid-1]&&arr[mid]>arr[mid+1]){right=mid-1;}
    else if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1]){left=mid+1;}

    return peak(arr,left,right);
}

int peakIndexInMountainArray(vector<int>& arr)
{
    int left=1,right=arr.size()-2;
    return peak(arr,left,right);
}


int main()
{
    int n;cin>>n;
    int i=rand()%(n-2)+1;

    vector<int> arr;arr.push_back(rand()%10);

    for(int j=1;j<=i;j++)
    {
        int x=arr[j-1]+rand()%10+1;
        arr.push_back(x);
    }
    for(int j=i+1;j<n;j++)
    {
        int x=arr[j-1]-rand()%5-1;
        arr.push_back(x);
    }

    cout<<endl<<"-> "<<peakIndexInMountainArray(arr)-i<<" <-";

    return 0;
}

