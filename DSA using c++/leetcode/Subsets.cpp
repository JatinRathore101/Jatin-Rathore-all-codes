#include<bits/stdc++.h>
using namespace std;

/*
Given an integer array nums of unique elements, return all possible
subsets(the power set). The solution set must not contain duplicate
subsets. Return the solution in any order.
*/

void disp(vector<vector<int>> &v)
{cout<<endl;
 for(auto it:v)
 {for(auto gt :it)
  {cout<<gt<<"  ";}
  cout<<endl;}
}


vector<vector<int>> subsets(vector<int>& nums) // by iteration
{
    vector<vector<int>> v={{}};
    for(int i=0;i<nums.size();i++)
    {
        int y=v.size();
        for(int j=0;j<y;j++)
        {
            vector<int> ele=v[j];
            ele.push_back(nums[i]);
            v.push_back(ele);
        }
    }
    return v;
}


/*
void pushRecur(vector<vector<int>> &v,vector<int> nums,vector<int> output,int i)
{
        if(i>=nums.size()){v.push_back(output); return;}

        pushRecur(v,nums,output,i+1);

        output.push_back(nums[i]);
        // v.push_back(output); this line is error , it creates duplicacy
        pushRecur(v,nums,output,i+1);// don't modify here.
}

vector<vector<int>> subsets(vector<int>& nums) // By recursion
{
    vector<vector<int>> v;
    vector<int> output;
    pushRecur(v,nums,output,0);
    return v;
} */

int main()
{
    int n;cin>>n;vector<int> nums;
    for(int i=0;i<n;i++){nums.push_back(rand()%90+10);cout<<nums[i]<<"  ";}
    vector<vector<int>> v=subsets(nums);
    disp(v);
    return 0;
}

