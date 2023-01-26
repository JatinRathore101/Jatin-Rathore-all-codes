#include<bits/stdc++.h>
using namespace std;

COMPLETE THIS CODE AFTER LEARNING HEAP DATA STRUCTURE

/*
HEAP SORT
Heap sort is a comparison-based sorting technique based on Binary Heap data structure. It is similar to the selection sort where we first find the minimum element and place the minimum element at the beginning. Repeat the same process for the remaining elements.

Advantages of heapsort:
-Efficiency –  The time required to perform Heap sort increases logarithmically while other algorithms may grow exponentially slower as the number of items to sort increases. This sorting algorithm is very efficient.
-Memory Usage – Memory usage is minimal because apart from what is necessary to hold the initial list of items to be sorted, it needs no additional memory space to work
-Simplicity –  It is simpler to understand than other equally efficient sorting algorithms because it does not use advanced computer science concepts such as recursion

The heap sort algorithm has limited uses because Quicksort and Mergesort are better in practice. Nevertheless, the Heap data structure itself is enormously used.

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

void _sort(vector<int>&a)
{

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
    _sort(a);
    disp(a);
    return 0;
}

/*
Heap sort is an in-place algorithm.
Its typical implementation is not stable, but can be made stable
Typically 2-3 times slower than well-implemented QuickSort.  The reason for slowness is a lack of locality of reference.

*/
