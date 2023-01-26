#include<bits/stdc++.h>
using namespace std;
/*
BUBBLE SORT
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping
the adjacent elements if they are in the wrong order. This algorithm is not
suitable for large data sets as its average and worst-case time complexity is
quite high.

steps:
-Run a nested for loop to traverse the input array using two variables i and j,
such that 0 ≤ i < n-1 and 0 ≤ j < n-i-1
-If arr[j] is greater than arr[j+1] then swap these adjacent elements, else
move on
-Print the sorted array
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

void bubble_sort(vector<pair<int,int>> &a)
{
    int n=a.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j].first>a[j+1].first)
            {
                swap(a[j],a[j+1]);
            }
        }
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
    bubble_sort(a);
    disp(a);
    return 0;
}

/*
Time Complexity: O(n^2)
Auxiliary Space: O(1)
Optimized Implementation of Bubble Sort:
The above function always runs O(n^2) time even if the array is sorted. It can be optimized by stopping the algorithm if the inner loop didn’t cause any swap.

Bubble sort performs swapping of adjacent pairs without the use of any major data structure. Hence Bubble sort algorithm is an in-place algorithm.
Bubble sort algorithm is stable.

Worst Case Analysis for Bubble Sort:
The worst-case condition for bubble sort occurs when elements of the array are arranged in decreasing order.
In the worst case, the total number of iterations or passes required to sort a given array is (n-1). where ‘n’ is a number of elements present in the array.
Total number of swaps = Total number of comparison
Total number of comparison (Worst case) = n(n-1)/2
Total number of swaps (Worst case) = n(n-1)/2

Worst and Average Case Time Complexity: O(N2). The worst case occurs when an array is reverse sorted.
Best Case Time Complexity: O(N). The best case occurs when an array is already sorted.
Auxiliary Space: O(1)
*/
