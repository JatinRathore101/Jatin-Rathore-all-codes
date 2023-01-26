#include<bits/stdc++.h>
using namespace std;

/*
An array arr a mountain if the following properties hold:

    arr.length >= 3
    There exists some i with 0 < i < arr.length - 1 such that:
        arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
        arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.

 

Example 1:

Input: arr = [0,1,0]
Output: 1

Example 2:

Input: arr = [0,2,1,0]
Output: 1

Example 3:

Input: arr = [0,10,5,2]
Output: 1

 

Constraints:

    3 <= arr.length <= 105
    0 <= arr[i] <= 106
    arr is guaranteed to be a mountain array.


*/

int peakIndexInMountainArray(vector<int>& arr)
    {

        int i=0,j=arr.size()-1,mid;
        while(i<=j)
        {
            mid=i+(j-i)/2;
            if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1])
            {break;}
            else if(arr[mid]>arr[mid+1]){j=mid-1;}
            else{i=mid+1;}
        }return mid;
    }

int main()
{
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        a[i]=x;
    }
    int y=peakIndexInMountainArray(a);
    cout<<endl<<y<<endl;
    return 0;
}

