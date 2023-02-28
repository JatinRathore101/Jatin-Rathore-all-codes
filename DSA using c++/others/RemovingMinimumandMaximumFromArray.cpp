#include<bits/stdc++.h>
using namespace std;

int minimumDeletions(vector<int>& nums)
{
    int ma=nums[0],mi=nums[0],mai=0,mii=0;
    for(int i=1;i<nums.size();i++)
    {
        if(ma<nums[i]){mai=i;ma=nums[i];}
        if(mi>nums[i]){mii=i;mi=nums[i];}
    }

    int x=min(mai,mii),y=max(mai,mii);

    int a=nums.size()-y+x+1,b=y+1,c=nums.size()-x;

    return min(a,min(b,c));
}

int main()
{
    vector<int> nums={1,10,8,4,9,0,2,5,7};
    cout<<minimumDeletions(nums);
    return 0;
}

