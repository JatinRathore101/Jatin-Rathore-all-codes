#include<bits/stdc++.h>
using namespace std;

/*
COUNTING SORT
Counting sort is a sorting technique based on keys between a specific range. It
works by counting the number of objects having distinct key values (kind of
hashing). Then do some arithmetic to calculate the position of each object in the
output sequence.

Like other algorithms this sorting algorithm is not a comparison-based algorithm,
it hashes the value in a temporary count array and uses them for sorting.
It uses a temporary array making it a non In Place

can only be applied if we know the range of data.

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

/*
void counting_sort(vector<int>&a)
{
    int low=*min_element(a.begin(), a.end());
    int high=*max_element(a.begin(), a.end());
    vector<int> b(high-low+1);
    for(int i=0;i<b.size();i++)
    {
        b[i]=0;
    }
    for(int i=0;i<a.size();i++)
    {
        b[a[i]-low]++;
    }
    int k=0;
    for(int i=0;i<b.size();i++)
    {
        if(b[i]>0)
        {
            for(int j=0;j<b[i];j++)
            {
                a[k]=i+low;k++;
            }
        }
    }
}
*/

void counting_sort(vector<int>&a)
{
    int low=*min_element(a.begin(), a.end());
    int high=*max_element(a.begin(), a.end());
    vector<int> b(high-low+1),c(a.size());
    int i;
    for(i=0;i<a.size();i++)
    {
        b[a[i]-low]++;
    }
    for(i=1;i<b.size();i++)
    {
        b[i]+=b[i-1];
    }
    for(i=0;i<c.size();i++)
    {
        c[b[a[i]-low]-1]=a[i];
        b[a[i]-low]--;
        // for understanding this watch geeksforgeeks video on counting sort
    }
    /*
    For Stable algorithm
    for (i = sizeof(arr)-1; i>=0; --i)
    {
        output[count[arr[i]]-1] = arr[i];
        --count[arr[i]];
    }

    For Logic : See implementation
    */
    for(i=0;i<a.size();i++)
    {
        a[i]=c[i];
    }

}

int main()
{
    int n,x;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        x=rand()%n-rand()%(i+1);
        if((i%7==2)||(i%3==0))x*=-1;
        //cin>>x;
        a.push_back(x);
    }
    disp(a);
    counting_sort(a);
    disp(a);
    return 0;
}

/*
Time complexity: O(n), where n is total number of elements
Auxiliary Space: O(n)

Counting sort is efficient if the range of input data is not significantly
greater than the number of objects to be sorted.

Counting sort is a linear time sorting algorithm that sort in O(n+k) time
when elements are in the range from 1 to k. It is not a comparison-based
sorting. Its running time complexity is O(n) with space proportional to the
range of data.

Counting sort is able to achieve this because we know the range of the data
we are sorting.
It is often used as a sub-routine to another sorting algorithm like radix sort.
Counting sort uses partial hashing to count the occurrence of the data object
in O(1).
Counting sort can be extended to work for negative inputs also.
Counting sort is not a stable algorithm. But it can be made stable with some
code changes.
*/
