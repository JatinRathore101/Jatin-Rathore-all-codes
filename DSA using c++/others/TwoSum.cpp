#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<pair<int,int>> &v,int x)
{
    int left=0,right=v.size()-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(v[mid].first==x){return v[mid].second;}
        else if(v[mid].first<x){left=mid+1;}
        else{right=mid-1;}
    }
    return -1;
}

vector<int> twoSum(vector<int>& nums, int target)
{
    vector<pair<int,int>> v;int i=0;
    for(auto it:nums){v.push_back({it,i});i++;}
    sort(v.begin(),v.end());

    vector<int> ans(2);
    for(auto it:v)
    {
        int y=binarySearch(v,target-it.first);
        if(y!=-1&&y!=it.second){ans[0]=it.second;ans[1]=y;break;}
    }
    return ans;
}

int main()
{
    vector<int> nums={2,0,1,4,5};
    int target=6;
    vector<int> v=twoSum(nums,target);
    cout<<v[0]<<"  "<<v[1];
    return 0;
}

/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]



Constraints:

    2 <= nums.length <= 104
    -109 <= nums[i] <= 109
    -109 <= target <= 109
    Only one valid answer exists.

*/
