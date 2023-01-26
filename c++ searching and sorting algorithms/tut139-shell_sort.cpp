#include<bits/stdc++.h>
using namespace std;
/*
SHELL SORT
Shell sort is mainly a variation of Insertion Sort. In insertion sort, we
move elements only one position ahead.
The idea of ShellSort is to allow the exchange of two far items separated
by a gap leaving the elements in between.
The we keep reducing the gap until it becomes 1 and adjescent elements are
allowed to exchange(this last iteration of shell sort is actually a normal
insertion sort, but total swaps needed will be very low due to gap sortings.)

steps
-iteration 1 - initialize the gap = n/2    ,    where n=size of list/array/vector.
-in subiterations of this iteration, separately sort- set1{a[0],a[gap],a[2*gap],a[3*gap].....}, set2{a[1],a[gap+1],a[2*gap+1],a[3*gap+1].....} , set3{...}

-iteration 2 -  gap/=2 => gap=n/4  ,
-in subiterations of this iteration, separately sort- set1{a[0],a[gap],a[2*gap],a[3*gap].....}, set2{a[1],a[gap+1],a[2*gap+1],a[3*gap+1].....} , set3{...}

-iteration 3 -  gap/=2 => gap=n/8  ,
-in subiterations of this iteration, separately sort- set1{a[0],a[gap],a[2*gap],a[3*gap].....}, set2{a[1],a[gap+1],a[2*gap+1],a[3*gap+1].....} , set3{...}
.
.
.
.
.
.
-last iteration -  gap=1     (this iteration is just noramal insertion sort)
-in subiterations of this iteration, separately sort- set1{a[0],a[gap],a[2*gap],a[3*gap].....}, set2{a[1],a[gap+1],a[2*gap+1],a[3*gap+1].....} , set3{...}

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

void shell_sort(vector<pair<int,int>> &a)
{
    int n=a.size(),key;
    pair<int,int> temp;
    for(int gap=n/2;gap>0;gap/=2)
    {
        for(int i=gap;i<n;i++)
        {
            key=a[i].first;
            temp=a[i];
            int j;
            for(j=i;j>=gap&&a[j-gap].first>key;j-=gap)
            {
                a[j]=a[j-gap];
            }
            a[j]=temp;
        }
    }

}

int main()
{
    int n,x;cin>>n;
    vector<pair<int,int>> a,b;
    for(int i=0;i<n;i++)
    {
        x=rand()%19-9;
        //cin>>x;
        a.push_back({x,i});
    }b=a;
    disp(a);
    shell_sort(a);
    disp(a);
    return 0;
}

/*
Time Complexity: Time complexity of the above implementation of Shell sort
is O(n^2). In the above implementation, the gap is reduced by half in every
iteration. There are many other ways to reduce gaps which leads to better
time complexity. example successive numbers of the form (2^p)*(3^q)
=> gaps = {1,2,3,4,6,8,9,12,16,18....} , for all (gap) < (size of array)
// https://en.wikipedia.org/wiki/Shellsort#Gap_sequences
-worst case O(n^2)
-average O(n^1.25) , O(n^1.5)  -    The shell sort Average Case Complexity
depends on the interval selected by the programmer. θ(n log(n)2)
-best case complexity is Ω(n log(n))

Shell sort is not stable
But it is in place


*/
