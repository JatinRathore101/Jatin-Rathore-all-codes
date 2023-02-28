#include<bits/stdc++.h>
using namespace std;

/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.



Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]

Example 3:

Input: nums = [1]
Output: [[1]]


Constraints:

    1 <= nums.length <= 6
    -10 <= nums[i] <= 10
    All the integers of nums are unique.

*/

void permuteRecur(vector<vector<int>> &v,vector<int> output,vector<int> nums)
{
    if(nums.size()<=0){v.push_back(output);return;}

    for(int i=0;i<nums.size();i++)
    {
        output.push_back(nums[i]);
        vector<int> nums2=nums;
        nums2.erase(nums2.begin()+i); // instead of creating new vector and erasing and sending, we can simply swap and reswap the element and send the subvector
        permuteRecur(v,output,nums2);
        output.pop_back();
    }

}

vector<vector<int>> permute(vector<int>& nums) // By recursion and backtracking //
{
    vector<vector<int>> v;
    if(nums.size()==0){return v;}
    vector<int> output;
    permuteRecur(v,output,nums);
    return v;
}

int main()
{
    vector<int> nums={1,0,2};
    vector<vector<int>> v=permute(nums);
    for(auto it:v){for(auto gt:it){cout<<gt<<"  ";}cout<<endl;}
    return 0;
}
