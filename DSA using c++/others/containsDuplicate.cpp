#include<bits/stdc++.h>
using namespace std;

bool merge(vector<int>& nums,int left,int mid,int right)
{
    vector<int> v(right-left+1);
    int i=left,j=mid+1,k=0;
    while(i<=mid&&j<=right)
    {
        if(nums[i]==nums[j]){return true;}
        else if(nums[i]<nums[j])
        {
            v[k++]=nums[i++];
        }
        else
        {
            v[k++]=nums[j++];
        }
    }
    while(i<=mid)
    {
        v[k++]=nums[i++];
    }
    while(j<=right)
    {
        v[k++]=nums[j++];
    }

    for(i=0;i<k;i++)
    {
        nums[i+left]=v[i];
    }

    return false;
}

bool msort(vector<int>& nums,int left,int right)
{
    if(left>=right){return false;}
    int mid=left+(right-left)/2;

    bool a=msort(nums,left,mid);
    bool b=msort(nums,mid+1,right);
    bool c=merge(nums,left,mid,right);

    return (a|b)|c;
}

bool containsDuplicate2(vector<int>& nums)
{
    int left=0,right=nums.size()-1;
    return msort(nums,left,right);
}

bool containsDuplicate(vector<int>& nums)
{
    sort(nums.begin(),nums.end());
    int i=1;
    while(i<nums.size())
    {
        if(nums[i]==nums[i-1]){return true;}
        i++;
    }
    return false;
}

int main()
{
    vector<int> nums={1,2,3,4};
    cout<<::boolalpha<<containsDuplicate(nums);
    return 0;
}

