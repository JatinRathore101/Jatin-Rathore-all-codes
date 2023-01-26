#include<bits/stdc++.h>
using namespace std;
/*
MERGE SORT
The Merge Sort algorithm is a sorting algorithm that is based on the Divide and Conquer paradigm.
Think of it as a recursive algorithm continuously splits the array in half until it cannot be further divided. This means that if the array becomes empty or has only one element left, the dividing will stop, i.e. it is the base case to stop the recursion. If the array has multiple elements, split the array into halves and recursively invoke the merge sort on each of the halves. Finally, when both halves are sorted, the merge operation is applied. Merge operation is the process of taking two smaller sorted arrays and combining them to eventually make a larger one.
The array is recursively divided into two halves till the size becomes 1. Once the size becomes 1, the merge processes come into action and start merging arrays back till the complete array is merged.





step 1: start

step 2: declare array and left, right, mid variable

step 3: perform merge function.
        if left > right
            return
        mid= (left+right)/2
        mergesort(array, left, mid)
        mergesort(array, mid+1, right)
        merge(array, left, mid, right)

step 4: Stop
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

void merge(vector<pair<int,int>> &a,int left,int mid,int right)
{
    int i=left,j=mid+1;
    vector<pair<int,int>>b;
    while(true)
    {
        if((i<=mid)&&(j<=right))
        {
            if(a[i].first>a[j].first)
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

void mergesort(vector<pair<int,int>> &a,int left,int right)
{
    if(right<=left){return;}
    int mid=(left+right)/2;
    mergesort(a,left,mid);
    mergesort(a,mid+1,right);
    merge(a,left,mid,right);
}

int main()
{
    int n,x;cin>>n;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++)
    {
        x=rand()%19-9;
        //cin>>x;
        a.push_back({x,i});
    }
    disp(a);
    mergesort(a,0,a.size()-1);
    disp(a);
    return 0;
}

/*
The above recurrence can be solved either using the Recurrence Tree method or
the Master method. It falls in case II of the Master Method and the solution
of the recurrence is θ(Nlog(N)). The time complexity of Merge Sort isθ(Nlog(N))
in all 3 cases (worst, average, and best) as merge sort always divides the
array into two halves and takes linear time to merge two halves.

Merge sort is not in place sorting algorithm, In merge sort the merging step
requires extra space to store the elements.
Merge sort is stable.

Merge sort can be made more efficient by replacing recursive calls with
Insertion sort for smaller array sizes, where the size of the remaining array
is less or equal to 43 as the number of operations required to sort an array
of max size 43 will be less in Insertion sort as compared to the number of
operations required in Merge sort.

Merge Sort is useful for sorting linked lists in O(N log N) time. In the case
of linked lists, the case is different mainly due to the difference in memory
allocation of arrays and linked lists. Unlike arrays, linked list nodes may not
be adjacent in memory. Unlike an array, in the linked list, we can insert items
in the middle in O(1) extra space and O(1) time. Therefore, the merge operation
of merge sort can be implemented without extra space for linked lists.

Drawbacks of Merge Sort:
-Slower compared to the other sort algorithms for smaller tasks.
-The merge sort algorithm requires an additional memory space of 0(n) for the
temporary array.
-It goes through the whole process even if the array is sorted.

*/
