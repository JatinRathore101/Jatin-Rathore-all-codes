#include<bits/stdc++.h>
using namespace std;

void rever(vector<int>& nums,int i,int j)
    {
        while(i<j)
        {
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k)
    {
        k%=nums.size();
        int i=0,j=nums.size()-k-1;
        rever(nums,i,j);

        i=nums.size()-k,j=nums.size()-1;
        rever(nums,i,j);

        i=0,j=nums.size()-1;
        rever(nums,i,j);
    }

int main()
{
    int k=13;
    vector<int> nums={4,2,3,1,8,9,7,5,6};
    for(auto it:nums){cout<<it<<"  ";}

    rotate(nums,k);

    cout<<endl;
    for(auto it:nums){cout<<it<<"  ";}
    cout<<endl;

    return 0;
}
