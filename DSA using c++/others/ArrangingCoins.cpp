#include<bits/stdc++.h>
using namespace std;

int arrangeCoins(int n)
{
    int left=1,right=n,ans;
    while(left<=right)
    {
        long long mid=left+(right-left)/2;
        if(mid%2==0&&(mid/2)*(mid+1)<=n)
        {
            ans=mid;
            left=mid+1;
        }
        else if(mid%2==1&&((mid+1)/2)*(mid)<=n)
        {
            ans=mid;
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return ans;
}

int main()
{
    int n;cin>>n;
    cout<<arrangeCoins(n);
    return 0;
}


/*
You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.

Given the integer n, return the number of complete rows of the staircase you will build.



Example 1:

Input: n = 5
Output: 2
Explanation: Because the 3rd row is incomplete, we return 2.

Example 2:

Input: n = 8
Output: 3
Explanation: Because the 4th row is incomplete, we return 3.



Constraints:

    1 <= n <= 231 - 1


*/
