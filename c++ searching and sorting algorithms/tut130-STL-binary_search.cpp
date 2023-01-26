#include<bits/stdc++.h>
using namespace std;
/*
Binary Search in C++ Standard Template Library (STL)

Binary search is a widely used searching algorithm that requires the list to be
sorted before search is applied. The main idea behind this algorithm is to keep
dividing the list in half (divide and conquer) until the element is found, or all
the elements are exhausted.
It works by comparing the middle item of the list with our target, if it matches,
it returns true otherwise if the middle term is greater than the target, the search
is performed in the left sub-list.
If the middle term is less than the target, the search is performed in the right
sub-list.


The prototype for STL binary search is :

binary_search(startaddress,endaddress,valuetofind)
Parameters    :
-startaddress : the address of the first element of the list.
-endaddress   : the address of the next contiguous location of the last element of the list.
-valuetofind  : the target value which we have to search for.
Returns       : true if an element equal to valuetofind is found, else false.

startaddress and endaddress can either be indeces or iterators depending on weather
array or vector/set/map etc are used.

*/

// CPP program to implement
// Binary Search in
// Standard Template Library (STL)

void disp(vector<int> &a)
{
	for (auto it:a)
    {
        cout <<it<<"  ";
    }
}

int main()
{
	vector<int> a = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	disp(a);
	cout << "\n\nLet's say we want to search for ";
	cout << "\n2 in the list So, we first sort the list";
	sort(a.begin(),a.end());
	cout << "\n\nThe list after sorting is : \n";
	disp(a);
	cout << "\n\nNow, we do the binary search for 2";
	if (binary_search(a.begin(),a.end(),2))
		cout << "\nElement found in the list";
	else
		cout << "\nElement not found in the list";

	cout << "\n\nNow, say we want to search for 10";
	if (binary_search(a.begin(),a.end(),10))
		cout << "\nElement found in the list";
	else
		cout << "\nElement not found in the list";

	return 0;
}
