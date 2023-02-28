#include<bits/stdc++.h>
using namespace std;


void merge(vector<int>& prices,int left,int mid,int right,int &output)
{
    vector<int> vmerge;
    int i=left,j=mid+1;

    output=max(output,prices[mid]-prices[mid+1]);

    while(i<=mid&&j<=right)
    {
        if(prices[i]>prices[j])
        {
            vmerge.push_back(prices[j]);
            j++;
        }
        else
        {
            vmerge.push_back(prices[i]);
            i++;
        }
    }

    while(i<=mid)
    {
        vmerge.push_back(prices[i]);
        i++;
    }

    while(j<=right)
    {
        vmerge.push_back(prices[j]);
        j++;
    }

    for(int k=left;k<=right;k++)
    {
        prices[k]=vmerge[k-left];
    }
}

void mergeSort(vector<int>& prices,int left,int right,int &output)
{
    if(left>=right){return;}
    int mid=left+(right-left)/2;

    mergeSort(prices,left,mid,output);
    mergeSort(prices,mid+1,right,output);

    merge(prices,left,mid,right,output);
}

int maxProfit(vector<int>& prices)
{
    reverse(prices.begin(),prices.end());
    int left=0,right=prices.size()-1,output=0;
    mergeSort(prices,left,right,output);
    return output;
}

/*
int maxProfit(vector<int>& prices)  //TLE
{
    int output=0,n=prices.size();
    if(n<=1){return output;}

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            output=max(output,prices[j]-prices[i]);
        }
    }
    return output;
}
*/

int main()
{
    vector<int> prices={7,6,4,3,1};
    cout<<maxProfit(prices);
    return 0;
}

/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.



Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.



Constraints:

    1 <= prices.length <= 105
    0 <= prices[i] <= 104


*/
