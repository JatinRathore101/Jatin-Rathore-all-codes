#include<bits/stdc++.h>
using namespace std;
/*

INTERPOLATION SEARCH
Given a sorted array of n uniformly distributed values arr[], write a
function to search for a particular element x in the array.
Linear Search finds the element in O(n) time, Jump Search takes O(√ n)
time and Binary Search takes O(log n) time.
The Interpolation Search is an improvement over Binary Search for
instances, where the values in a sorted array are uniformly distributed.
Interpolation constructs new data points within the range of a discrete
set of known data points. Binary Search always goes to the middle
element to check. On the other hand, interpolation search may go to
different locations according to the value of the key being searched.
For example, if the value of the key is closer to the last element,
interpolation search is likely to start search toward the end side.



To find the position to be searched, it uses the following formula.

pos=lo+((x-a[lo])*(hi-lo))/(a[hi]-a[lo])

The idea of formula is to return higher value of pos when element to be
searched is closer to a[hi], And smaller value when closer to a[lo].

a     ==> Array/vector where elements need to be searched
x     ==> Element to be searched
lo    ==> Starting index in a[]
hi    ==> Ending index in a[]



There are many different interpolation methods and one such is known as
linear interpolation. Linear interpolation takes two data points which
we assume as (x1,y1) and (x2,y2) and the formula is :  at point(x,y).
This algorithm works in a way we search for a word in a dictionary. The
interpolation search algorithm improves the binary search algorithm.
The formula for finding a value is: K = data-low/high-low.
K is a constant which is used to narrow the search space. In the case of
binary search, the value for this constant is: K=(low+high)/2.



The formula for pos can be derived as follows.
Let's assume that the elements of the array are linearly distributed.

General equation of line : y = m*x + c.
y is the value in the array and x is its index.

Now putting value of lo,hi and x in the equation
a[hi] = m*hi+c ----(1)
a[lo] = m*lo+c ----(2)
x = m*pos + c     ----(3)

m = (a[hi] - a[lo] )/ (hi - lo)

subtracting eqxn (2) from (3)
x - a[lo] = m * (pos - lo)
lo + (x - a[lo])/m = pos
pos = lo + (x - a[lo]) *(hi - lo)/(a[hi] - a[lo])

Algorithm
The rest of the Interpolation algorithm is the same except for the
above partition logic.
Step1: In a loop, calculate the value of “pos” using the probe
position formula.
Step2: If it is a match, return the index of the item, and exit.
Step3: If the item is less than arr[pos], calculate the probe position
of the left sub-array. Otherwise, calculate the same in the right
sub-array.
Step4: Repeat until a match is found or the sub-array reduces to zero.
Below is the implementation of the algorithm.

Time Complexity: O(log2(log2 n)) for the average case, and O(n) for
the worst case
Auxiliary Space Complexity: O(1)

*/

int interpolationSearch(vector<pair<int,int>> &a,int x)
{
    //pos=lo+((hi-lo)*(x-a[lo]))/(a[hi]-a[lo])
    int lo=0,hi=a.size()-1,pos;
    while(true)
    {
        if(a[hi].first==a[lo].first)
        {
            if(a[lo].first==x)
            {
                /*while((lo>0)&&(a[lo-1].first==x))
                {
                    lo--;
                }*/
                return a[lo].second;
            }
            else{return -1;}
        }
        pos=lo+((hi-lo)*(x-a[lo].first))/(a[hi].first-a[lo].first);
        if(a[pos].first==x)
        {
            /*while((pos>0)&&(a[pos-1].first==x))
            {
                pos--;
            }*/
            return a[pos].second;
        }
        else if(a[pos].first>x)
        {
            if(pos==lo){return -1;}
            hi=pos-1;
        }
        else if(a[pos].first<x)
        {
            if(pos==hi){return -1;}
            lo=pos+1;
        }
    }
}

void disp(vector<pair<int,int>> &a)
{
    for(auto it:a)
    {
        cout<<endl<<it.first<<"  "<<it.second;
    }
}

int main()
{
    int n,temp;
    cin>>n;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back({temp,i});
    }
    cout<<endl;
    disp(a);
    cout<<endl;
    sort(a.begin(),a.end());
    disp(a);
    cout<<endl;
    int x;cin>>x;
    int index=interpolationSearch(a,x);
    cout<<index;// result -1 if element not found
    return 0;
}
