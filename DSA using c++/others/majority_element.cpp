#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums)
{
    int ans,freq=0;
    unordered_map<int,int> m;
    for(auto it:nums){m[it]++;if(m[it]>freq){freq=m[it];ans=it;}}
    return ans;
}

int main()
{
    vector<int> nums={3,2,3,4,3};
    cout<<majorityElement(nums);
    return 0;
}

/*
Majority Element

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.



Example 1:

Input: nums = [3,2,3]
Output: 3

Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2



Constraints:

    n == nums.length
    1 <= n <= 5 * 104
    -109 <= nums[i] <= 109

*/
