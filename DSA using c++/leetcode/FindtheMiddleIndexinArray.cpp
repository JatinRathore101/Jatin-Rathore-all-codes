#include<bits/stdc++.h>
using namespace std;

/*
Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.
*/

int Pivot(vector<int>& nums,int left,int right)
{
    int mid=left+(right-left)/2;
    long long int sum=0;int flag=0;

    if(mid>0){flag=1;for(int i=0;i<mid;i++){sum+=nums[i];}}
    if(mid<nums.size()-1){flag=1;for(int i=mid+1;i<=nums.size()-1;i++){sum-=nums[i];}}

    int midleft=-1;
    if(left<=mid-1){midleft=Pivot(nums,left,mid-1);}


    if(midleft!=-1){return midleft;}
    else if(sum==0&&flag==1){return mid;}
    else if(left>=right){return -1;}
    else{return Pivot(nums,mid+1,right);}

}

int findMiddleIndex(vector<int>& nums)
{
    int left=0,right=nums.size()-1,x=-1;
    if(right==0){return 0;}
    return Pivot(nums,left,right);
}

int main()
{
    int n;cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        nums.push_back(x);
    }

    cout<<"\npivot index = "<<findMiddleIndex(nums);
    return 0;
}

