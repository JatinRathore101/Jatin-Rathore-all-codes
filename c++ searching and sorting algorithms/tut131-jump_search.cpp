#include<bits/stdc++.h>
using namespace std;
/*
JUMP SEARCH
Like Binary Search, Jump Search is a searching algorithm for sorted arrays.
The basic idea is to check fewer elements (than linear search) by jumping
ahead by fixed steps or skipping some elements in place of searching all
elements.
For example, suppose we have an array arr[] of size n and a block (to be jumped)
of size m. Then we search in the indexes arr[0], arr[m], arr[2m]…..arr[km]
and so on. Once we find the interval (arr[km] < x < arr[(k+1)m]), we perform
a linear search operation from the index km to find the element x.
Let’s consider the following array: (0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,
144, 233, 377, 610). The length of the array is 16. The Jump search will find
the value of 55 with the following steps assuming that the block size to be
jumped is 4.
STEP 1: Jump from index 0 to index 4;
STEP 2: Jump from index 4 to index 8;
STEP 3: Jump from index 8 to index 12;
STEP 4: Since the element at index 12 is greater than 55, we will jump back
a step to come to index 8.
STEP 5: Perform a linear search from index 8 to get the element 55.
Performance in comparison to linear and binary search:

If we compare it with linear and binary search then it comes out then it is
better than linear search but not better than binary search.

The increasing order of performance is:

linear search  <  jump search  <  binary search

The optimal block size to be skipped-
In the worst case, we have to do n/m jumps, and if the last checked value
is greater than the element to be searched for, we perform m-1 comparisons
more for linear search. Therefore, the total number of comparisons in the
worst case will be ((n/m) + m-1). The value of the function ((n/m) + m-1)
will be minimum when m = √n. Therefore, the best step size is m = √n.

Time Complexity : O(√n)
Auxiliary Space : O(1)
Important points:

Works only with sorted arrays.
The optimal size of a block to be jumped is (√ n). This makes the time
complexity of Jump Search O(√ n).
The time complexity of Jump Search is between Linear Search ((O(n)) and
Binary Search (O(Log n)).
Binary Search is better than Jump Search, but Jump Search has the advantage
that we traverse back only once (Binary Search may require up to O(Log n)
jumps, consider a situation where the element to be searched is the smallest
element or just bigger than the smallest). So, in a system where binary
search is costly, we use Jump Search.
*/

/*
int jumpSearch(vector<int> a, int x)
{
	int m = sqrt(a.size());

	int prev = 0;
	while (a[min(m, a.size())-1] < x)
	{
		prev = m;
		m += sqrt(a.size());
		if (prev >= a.size())
			return -1;
	}
    while (arr[prev] < x)
	{
		prev++;
		if (prev == min(m, a.size()))
			return -1;
	}
	if (arr[prev] == x)
		return prev;

	return -1;
}*/

int jumpSearch(vector<int> a, int x)
{
    int m=sqrt(a.size());
    int left=0,right=left+m;
    while(true)
    {
        if(((x<a[left])&&(left<=0))||((x>a[right])&&(right>=a.size()-1))){return -1;}
        else if((x>=a[left])&&(x<=a[right])){break;}
        else{left=right;right+=m;}
    }
    for(int i=left;i<=right;i++)
    {
        if (a[i]==x){return i;}
    }
    return -1;
}

int main()
{   // jump search works on sorted array.
	vector<int> a= { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610 };
	int x = 21;
	int index = jumpSearch(a, x);

	cout << "Number " << x << " is at index " << index;
	return 0;
}
