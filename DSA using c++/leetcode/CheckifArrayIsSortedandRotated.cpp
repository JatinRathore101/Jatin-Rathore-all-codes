#include<bits/stdc++.h>
using namespace std;

/*
bool check(vector& nums)
{
    int n =nums.size();
    int count =0;

    for(int i =1; i<nums.size(); i++)
    {
        if(nums[i-1]>nums[i])
        {
            count++;
        }

    }

    if(nums[0]<nums[n-1])
    {
        count++;
    }

    return count<=1;
}

// code directly uses property of pivot instead of finding pivot // only one pivot allowed
*/

bool check(vector<int> &nums)
{
    int n =nums.size();
    int count =0,count2 =0;

    for(int i=0;i<n;i++)
    {
        if(nums[i]<nums[(n+i-1)%n]){count++;}
        else if(nums[i]==nums[(n+i-1)%n]){count2++;}
    }

    if(count==1||count2==n){return 1;}
    return 0;
}

int main()
{
    bool x=check({4,5,6,7,1,2,3});
    cout<<x;
    return 0;
}
