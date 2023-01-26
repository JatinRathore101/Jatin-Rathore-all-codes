#include<bits/stdc++.h>
using namespace std;

/*
PEGIONHOLE SORTING
It is similar to counting sort, but differs in that it “moves
items twice: once to the bucket array and again to the final
destination “.
It requires O(n + Range) time where n is number of elements in
input array and ‘Range’ is number of possible values in array.



-Find minimum and maximum values in array. Let the minimum and
maximum values be ‘min’ and ‘max’ respectively. Also find range
as ‘max-min+1’.
-Set up an array of initially empty “pigeonholes” the same size
as of the range.
-Visit each element of the array and then put each element in
its pigeonhole. An element arr[i] is put in hole at
index arr[i] – min.
-Start the loop all over the pigeonhole array in order and put
the elements from non- empty holes back into the original array.
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
    int min=*min_element(a.begin(), a.end());
    int max=*max_element(a.begin(), a.end());
    int range=max-min+1;
    vector<vector<int>> b(range);
    for(int i=0;i<a.size();i++)
    {
        b[a[i]-min].push_back(a[i]);
    }
    int k=0;
    for(int i=0;i<range;i++)
    {
        for(auto it:b[i])
        {
            a[k++]=it;
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
    _sort(a);
    disp(a);
    return 0;
}

/*
Pigeonhole sort has limited use as requirements are rarely met.
For arrays where range is much larger than n, bucket sort is a
generalization that is more efficient in space and time.
*/
