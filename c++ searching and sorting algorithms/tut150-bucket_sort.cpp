#include<bits/stdc++.h>
using namespace std;

/*
BUCKET SORT
Bucket sort is mainly useful when input is uniformly distributed over a range.

Break the input list into multiple sublists based on there values in which
range they exist, then sort these sublists individually, finally concatenate
all these sublists.


Algorithm :
-Find maximum element and minimum of the array
-Calculate the range of each bucket
-Create n buckets of calculated range
-Scatter the array elements to these buckets
-Now sort each bucket individually
-Gather the sorted elements from buckets to original array
*/

void disp(vector<float> &a)
{
    cout<<endl;
    for(auto it:a)
    {
        cout<<it<<"  ";
    }
    cout<<endl;
}

void bucketSort(vector<float> &a)
{

    // 1) Create n empty buckets
    int n=a.size();
    vector<vector<float>> b(n);

    // 2) Put array elements
    // in different buckets
    for (int i = 0; i < n; i++) {
        int bi = n * a[i]; // Index in bucket
        b[bi].push_back(a[i]);
    }

    // 3) Sort individual buckets
    for (int i = 0; i < n; i++)
        sort(b[i].begin(), b[i].end());

    // 4) Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
            a[index++] = b[i][j];
}

int main()
{
    int n;cin>>n;
    float x;
	vector<float> a;

	for (int i = 0; i < n; i++)
    {
        x=rand()%648739-rand()%76453+rand()%4739-rand()%445+rand()%98-rand()%7;
		x/=100000;
		a.push_back(x);
    }

    disp(a);

    float min=10000000,max=-10000000;
    for (int i=0;i<n;i++)
	{
	    if(a[i]>max){max=a[i];}
	    if(a[i]<min){min=a[i];}
	}
	for (int i=0;i<n;i++) // normalization
	{
	    a[i]-=min;
	    a[i]/=(max-min+2);
	}

	bucketSort(a);

	for (int i=0;i<n;i++)
	{
	    a[i]*=(max-min+2);
	    a[i]+=min;
    }
    disp(a);
    return 0;
}

/*
Time complexity
Almost Linear O(n);

Bucketsort is definitely not an "in-place" sorting algorithm. The whole idea is that
elements sort themselves as they are moved to the buckets. In the worst of the good
cases (sequential values, but no repetition) the additional space needed is as big as
the original array.
*/

/*
BE REMEMBER DUE TO NORMALIATION AND THEN DENORMALIZATION VALUES ARE  CHANGED(ROUNDED OFF)
THEY DO NOT REMAIN THE SAME.
TO AVOID ROUNDOFF ERRORS USE TRICK{ONLY VALID FOR RANGE(-1.000000,1.000000)}
1.MULTIPLY NEGATIVE VALUES BY -1 AND STORE THEM IN SEPARATE VECTOR
2.CALL BUCKET SORT FOR THEM SEPARATELY
3.MERGE NEGATIVE AND POSITIVE VALUES IN FINAL VECTOR AFTER SORTING

BUT FOR THIS CASE EVEN THIS TRICK IS USELESS AS TO MAKE NUMBERS SMALLER THAN ONE THEY STILL
NEED TO BE DEVIDED BY A NUMBER GREATER THAN THERE RANGE
*/
