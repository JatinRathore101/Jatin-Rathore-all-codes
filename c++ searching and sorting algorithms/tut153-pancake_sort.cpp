#include<bits/stdc++.h>
using namespace std;

/*
PANCAKE SORTING
Given an unsorted array, the task is to sort the given array. You are allowed to do only following operation on array.
flip(arr, i): Reverse array from 0 to i
Approach: Unlike a traditional sorting algorithm, which attempts to sort with the fewest comparisons possible, the goal is to sort the sequence in as few reversals as possible.

The idea is to do something similar to Selection Sort. We one by one place maximum element at the end and reduce the size of current array by one.
*/

void disp(vector<int>&a)
{
    cout<<endl;
    for(auto it:a)
    {
        cout<<it<<"  ";
    }
    cout<<endl;
}

void reverse(vector<int>&a,int left,int right)
{
    vector<int> b;
    for(int i=right;i>=left;i--)
    {
        b.push_back(a[i]);
    }
    for(int i=left;i<=right;i++)
    {
        a[i]=b[i-left];
    }
}

void pancake_sort(vector<int>&a)
{
    int max,left,right;
    for(int i=a.size();i>1;i--)
    {
        max=INT_MIN;
        right=i-1;left=0;
        for(int j=0;j<i;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
                left=j;
            }
        }
        reverse(a,left,right);
    }
}

int main()
{
    int n,x;cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        x=rand()%19-9;
        //cin>>x;
        a.push_back(x);
    }
    disp(a);
    pancake_sort(a);
    disp(a);
    return 0;
}

/*
Time Complexity: O(n^2)
Auxiliary Space: O(1)
*/
