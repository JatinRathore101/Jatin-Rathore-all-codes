#include<bits/stdc++.h>
using namespace std;

/*
Median of Two Sorted Arrays
Given two sorted arrays nums1 and nums2 of size m and n respectively,
return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).
*/

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
        int n1=nums1.size(),n2=nums2.size(),n=n1+n2,r=n/2,i=0,j=0,k=0,a=0,b=0;
        double med=0;

        while((i<n1)&&(j<n2))
        {
            if(k>r){break;}
            if(nums1[i]<nums2[j])
            {
                a=b;
                b=nums1[i];
                i++;k++;
            }
            else
            {
                a=b;
                b=nums2[j];
                j++;k++;
            }
        }

        while(i<n1)
        {   if(k>r){break;}
            a=b;
            b=nums1[i];
            i++;k++;
        }

        while(j<n2)
        {   if(k>r){break;}
            a=b;
            b=nums2[j];
            j++;k++;
        }

        if(n%2==0)
        {
            med=a+b;
            med/=2;
        }
        else
        {
            med=b;
        }

        return med;
}

int main()
{
    vector<int> nums1={1,3,4},nums2={2,7};
    double med=findMedianSortedArrays(nums1,nums2);
    cout<<med;
    return 0;
}

