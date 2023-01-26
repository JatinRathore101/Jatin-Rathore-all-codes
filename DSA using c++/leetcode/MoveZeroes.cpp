#include<bits/stdc++.h>
using namespace std;

/*void moveZeroes(vector<int>& nums)
{
    int i=0,j;

    while(true)
    {
        j=i+1;if(j==nums.size()){break;}

        while(nums[i]!=0){i++;if(i==nums.size()){i--;break;}}

        while(nums[j]==0){j++;if(j==nums.size()){j--;break;}}

        if(nums[i]==0&&nums[j]!=0&&i<j)
        {swap(nums[i],nums[j]);}
    }
}*/

void moveZeroes(vector<int>& nums)
{
    int i=0,j=0;

    while(j<nums.size())
    {
        if(nums[j]!=0)
        {swap(nums[i],nums[j]);i++;j++;}
        else
        {j++;}
    }
}

/*void moveZeroes(vector<int>& nums)
{
    vector<int> Nums(nums);

    int i=0;
    for(auto it:Nums)
    {
        if(it!=0){nums[i]=it;i++;}
    }
    while(i<nums.size())
    {
        nums[i]=0;i++;
    }
}*/

int main()
{
    vector<int> nums={0};

    moveZeroes(nums);

    cout<<endl;for(auto it:nums){cout<<it<<"  ";}

    return 0;
}

