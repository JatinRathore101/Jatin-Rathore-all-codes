#include<bits/stdc++.h>
using namespace std;
/*
QUICK SORT
QuickSort is a Divide and Conquer algorithm. It picks an element as a pivot
and partitions the given array around the picked pivot.

There are many different versions of quickSort that pick pivot in different ways.
Always pick the first element as a pivot.
Always pick the last element as a pivot.
Pick a random element as a pivot.
Pick median as the pivot.

The key process in quickSort is a partition(). The target of partitions is, given
an array and an element x of an array as the pivot, put x at its correct position
in a sorted array and put all smaller elements (smaller than x) before x, and put
all greater elements (greater than x) after x. All this should be done in linear
time.

There can be many ways to do partition, in following method we start from the
leftmost element and keep track of the index of smaller (or equal to) elements as i.
While traversing, if we find a smaller element, we swap the current element with
arr[i]. Otherwise, we ignore the current element.
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

int Partition(vector<int>&a,int left,int mid,int right)
{
    swap(a[left],a[mid]);
    int j=left;
    for(int i=left+1;i<=right;i++)
    {
        if(a[i]<a[j])
        {
            swap(a[i],a[j+1]);
            swap(a[j],a[j+1]);
            j++;
        }
    }
    return j;
}

void quick_sort(vector<int>&a,int left,int right)
{
    if(left>=right)
    {
        return;
    }
    int pivot=left+rand()%(right-left+1);
    int mid=Partition(a,left,pivot,right);
    quick_sort(a,left,mid-1);
    quick_sort(a,left+1,right);
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
    quick_sort(a,0,a.size()-1);
    disp(a);
    return 0;
}

/*
Time complexity analysis
Worst case O(n^2)
Best case O(n*log(n))

Although the worst case time complexity of QuickSort is O(n2) which is more than
many other sorting algorithms like Merge Sort and Heap Sort, QuickSort is faster
in practice, because its inner loop can be efficiently implemented on most
architectures, and in most real-world data. QuickSort can be implemented in
different ways by changing the choice of pivot, so that the worst case rarely
occurs for a given type of data. However, merge sort is generally considered
better when data is huge and stored in external storage.

The default implementation of quick sort is not stable. However any sorting
algorithm can be made stable by considering indexes as comparison parameter.

As per the broad definition of in-place algorithm it qualifies as an in-place
sorting algorithm as it uses extra space only for storing recursive function calls
but not for manipulating the input.

In case of too many redundant elements 3-way quick sort if preffered.

we can also implement QuickSort Iteratively.
*/
