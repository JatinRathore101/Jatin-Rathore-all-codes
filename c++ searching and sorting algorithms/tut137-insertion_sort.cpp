#include<bits/stdc++.h>
using namespace std;
/*
INSERTION SORT
Insertion sort is a simple sorting algorithm that works similar to the way
you sort playing cards in your hands. The array is virtually split into a
sorted and an unsorted part. Values from the unsorted part are picked and
placed at the correct position in the sorted part.
This algorithm is one of the simplest algorithm with simple implementation.
Basically, Insertion sort is efficient for small data values.
Insertion sort is adaptive in nature, i.e. it is appropriate for data sets
which are already partially sorted.

for more understanding refer geeksforgeeks
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

void insertion_sort(vector<pair<int,int>> &a)
{
    for(int i=1;i<a.size();i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(a[j+1].first<a[j].first){swap(a[j],a[j+1]);}
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
    insertion_sort(a);
    disp(a);
    return 0;
}

/*
Time Complexity: O(N^2)
Auxiliary Space: O(1)

Insertion sort takes maximum time to sort if elements are sorted in
reverse order. And it takes minimum time (Order of n) when elements
are already sorted.

Insertion Sort algorithm follows incremental approach.

Insertion sort is an in-place sorting algorithm.

Insertion sort is a stable sorting algorithm.

Insertion sort is used when number of elements is small. It can also be
useful when input array is almost sorted, only few elements are misplaced
in complete big array.
*/
