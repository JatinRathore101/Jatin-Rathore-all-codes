#include<bits/stdc++.h>
using namespace std;

/*
C++ STL inbuilt sort and comparater function:-
sort(iterator first,iterator second)
// sorts from first iterator to second iterator.

this inbuilt sort of STL is called as intro-sort which is
a mixer of three sorting algorithms(quick sort, heap sort,
insertion sort). This is one of the best sorting algorithm.
*/

int main()
{
    int n=rand()%10+7;
    cout<<n<<endl;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        a[i]=(rand()%911)%10;
        cout<<a[i]<<"  ";
    }cout<<endl;

    sort(a.begin()+2,a.end());
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    return 0;
}

