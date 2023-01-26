#include<bits/stdc++.h>
using namespace std;

/*

BINARY INSERTION SORT
Binary insertion sort is a sorting algorithm which is similar to the
insertion sort, but instead of using linear search to find the location
where an element should be inserted, we use binary search. Thus, we
reduce the comparative value of inserting a single element from O (N)
to O (log N).
It is a flexible algorithm, which means it works faster when the same
given members are already heavily sorted, i.e., the current location of
the feature is closer to its actual location in the sorted list.

It is a stable filtering algorithm – elements with the same values ​​appear
in the same sequence in the last order as they were in the first list.

steps for binary insertion sort
Iterate the array from the second element to the last element.
Store the current element A[i] in a variable key.
Find the position of the element just greater than A[i] in the subarray
from A[0] to A[i-1] using binary search. Say this element is at index pos.
Shift all the elements from index pos to i-1 towards the right.
A[pos] = key.

*/

void disp(vector<pair<int,int>> &a)
{
    cout<<endl;
    for(auto it:a)
    {
        cout<<it.first<<"  "<<it.second<<"\n";
    }
    cout<<endl;
}

void binary_insertion_sort(vector<pair<int,int>> &a)
{
    int index,left,mid,right,key;
    pair<int,int>I;
    for(int i=1;i<a.size();i++)
    {
        I=a[i];
        key=a[i].first;
        left=0;
        right=i-1;
        while(true)
        {
            mid=(left+right)/2;

            if(a[mid].first<=key)
            {
                if(mid==right)
                {
                    index=right+1;
                    break;
                }
                left=mid+1;
            }
            else if(a[mid].first>key)
            {
                if(mid==left)
                {
                    index=left;
                    break;
                }
                right=mid-1;
            }
        }
        for(int j=i;j>index;j--)
        {
            a[j]=a[j-1];
        }
        a[index]=I;
    }
}

int main()
{
    int n,x;cin>>n;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++)
    {
        x=rand()%18-9;
        //cin>>x;
        a.push_back({x,i});
    }
    disp(a);
    binary_insertion_sort(a);
    disp(a);
    return 0;
}

