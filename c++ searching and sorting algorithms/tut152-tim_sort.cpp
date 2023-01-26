#include<bits/stdc++.h>
using namespace std;

/*
TIMSORT
TimSort is a sorting algorithm based on Insertion Sort and
Merge Sort.
First sort small pieces using Insertion Sort, then merges the
pieces using a merge of merge sort.
We divide the Array into blocks known as Run. We sort those
runs using insertion sort one by one and then merge those runs
using the combine function used in merge sort. If the size of
the Array is less than run, then Array gets sorted just by
using Insertion Sort. The size of the run may vary from 32 to
64 depending upon the size of the array. Note that the merge
function performs well when size subarrays are powers of 2. The
idea is based on the fact that insertion sort performs well for
small arrays.
Timsort is one of the best sorting algorithms in terms of
complexity and stability.



-We consider the size of the run as 32 and the input array is
divided into sub-array.
-We one-by-one sort pieces of size equal to run with a simple
insertion sort.
-After sorting individual pieces, we merge them one by one with
the merge sort. We double the size of merged subarrays after
every iteration.
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

void part_disp(vector<int>&a,int left,int right)
{
    cout<<endl;
    cout<<"left = "<<left<<"     right = "<<right;
    for(int i=left;i<=right;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}

void insertion_sort(vector<int> &a,int left,int right)
{
    if(right<=left){return;}
    for(int i=left+1;i<=right;i++)
    {
        int j;
        for(j=i-1;j>=left;j--)
        {
            if(a[j]>a[j+1])
            {swap(a[j+1],a[j]);}
        }
    }
}

void merge(vector<int> &a,int left,int mid,int right)
{
    int i=left,j=mid+1;
    vector<int>b;
    while(true)
    {
        if((i<=mid)&&(j<=right))
        {
            if(a[i]>a[j])
            {
                b.push_back(a[j]);
                j++;
            }
            else
            {
                b.push_back(a[i]);
                i++;
            }
        }
        else if(i<=mid)
        {
            b.push_back(a[i]);
            i++;
        }
        else if(j<=right)
        {
            b.push_back(a[j]);
            j++;
        }
        else
        {
            break;
        }
    }

    for(i=left;i<=right;i++)
    {
        a[i]=b[i-left];
    }

}

void Timsort(vector<int>&a)
{
    int n=a.size(),left,mid,right;
    for(int i=0;i<n;i+=32)
    {
        left=i;
        right=min((n-1),(i+31));
        insertion_sort(a,left,right);

    }

    for(int size=32;size<n;size*=2)
    {
        for(left=0;left<n;left+=2*size)
        {
            mid=left+size-1;
            right=min((mid+size),(n-1));
            if(mid<right)
            {
                merge(a,left,mid,right);
            }
        }
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
    Timsort(a);
    disp(a);
    return 0;
}

/*
It is an stable sorting algorithm

NOT In-Place Sorting, as it requires extra space.Space O(n)


Time complexity of timsort
Best Case    Ω(n)
Average Case θ(n*log(n))
Worst Case   O(n*log(n))

Complexity Comparison with Merge and Quick Sort:
            Best          Average       Worst
Quick Sort  Ω(n*log(n))   θ(n*log(n))   O(n^2)
Merge Sort  Ω(n*log(n))   θ(n*log(n))   O(n*log(n))
Time Sort   Ω(n)          θ(n*log(n))   O(n*log(n))
*/
