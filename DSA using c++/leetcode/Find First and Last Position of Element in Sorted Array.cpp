#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target)
{
    int left=0,right=nums.size()-1;
    int mid,x=-1,y=-1;
    vector<int> idx;
    idx.push_back(-1);idx.push_back(-1);

    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(nums[mid]>=target){x=mid;right=mid-1;}
        else{left=mid+1;}
    }
    if(x==-1){return idx;}
    else if(nums[x]!=target){return idx;}

    left=x;right=nums.size()-1;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(nums[mid]<=target){y=mid;left=mid+1;}
        else{right=mid-1;}
    }

    idx[0]=x;idx[1]=y;
    return idx;
}

int main()
{
    vector<int> nums;int n,target;
    cin>>n;
    for(int i=0;i<n;i++){int x;cin>>x;nums.push_back(x);}
    cin>>target;

    vector<int> v = searchRange(nums,target);
    cout<<endl<<v[0]<<"  "<<v[1];
    return 0;
}
