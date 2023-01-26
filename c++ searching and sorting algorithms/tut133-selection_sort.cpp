#include<bits/stdc++.h>
using namespace std;
/*
SELECTION SORT
The selection sort algorithm sorts an array by repeatedly finding the
minimum element (considering ascending order) from the unsorted part
and putting it at the beginning.

The algorithm maintains two subarrays in a given array.
The subarray which already sorted.
The remaining subarray was unsorted.

In every iteration of the selection sort, the minimum element
(considering ascending order) from the unsorted subarray is picked and
moved to the sorted subarray.

*/

void disp(vector<int> &a)
{
    cout<<endl;
    for(auto it:a)
    {
        cout<<it<<"  ";
    }
}

void selection_sort(vector<int> &a)
{
    int index;
    for(int i=0;i<a.size()-1;i++)
    {
        index=i;
        for(int j=i+1;j<a.size();j++)
        {
            if(a[j]<a[index]) // use condition a[j]>a[index] to sort in descending order
            {
                index=j;
            }
        }
        swap(a[i],a[index]);
    }
}

int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<a.size();i++)
    {
        cin>>a[i];
    }
    disp(a);
    selection_sort(a);
    disp(a);
    return 0;
}

/*
Complexity Analysis of Selection Sort:
Time Complexity: The time complexity of Selection Sort is O(N2) as
there are two nested loops:
One loop to select an element of Array one by one = O(N)
Another loop to compare that element with every other Array element = O(N)
Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N2)
Auxiliary Space: O(1) as the only extra memory used is for temporary
variables while swapping two values in Array. The selection sort never
makes more than O(N) swaps and can be useful when memory write is a costly
operation.

The above(default) implementation of selection sort is not stable. However,
it can be made stable. A sorting algorithm is said to be stable if two
elements with same values appear in the same order with respect to each
other in sorted output as they appear in the input array to be sorted. Any
comparison based sorting algorithm which is not stable by nature can be
modified to be stable by changing the value comparison operation so that
the comparison of two values considers position as a factor for elements
with equal value or by tweaking it in a way such that its meaning doesn’t
change and it becomes stable as well.
Note: Subscripts{A,B} are only used for understanding the concept.
Input : 4A 5 3 2 4B 1
Not stable sorting output : 1 2 3 4B 4A 5   OR  : 1 2 3 4A 4B 5
stable sorting output : 1 2 3 4A 4B 5

Selection Sort Algorithm is "in place" as it does not require extra space.
*/
