#include<bits/stdc++.h>
using namespace std;

void disp(vector<vector<int>>& v)
{
    cout<<endl;
    for(auto it:v)
    {
        for(auto gt:it){cout<<gt<<"  ";}
        cout<<endl;
    }
    cout<<endl;
}

bool compy(vector<int> &v1,vector<int> &v2)
{
    if(v1[1]>v2[1]){return false;}
    return true;
}

bool compx(vector<int> &v1,vector<int> &v2)
{
    if(v1[0]!=v2[0]){return v1[0]<v2[0];}
    else {return v1[1]<=v2[1]; }
}

vector<vector<int>> merge(vector<vector<int>>& intervals)
{
    sort(intervals.begin(),intervals.end(),compx);
    int i=0,j=0;vector<vector<int>> ans;vector<int> v(2);
    while(j<intervals.size())
    {
        if(intervals[j+1][0]>intervals[j][1])
        {
            v[0]=intervals[i][0];v[1]=intervals[j][1];
            ans.push_back(v);i=j+1;
        }
        j++;
        if(j==intervals.size()-1)
        {
            v[0]=intervals[i][0];v[1]=intervals[j][1];
            ans.push_back(v);break;
        }
    }
    return ans;
}

void usort(vector<vector<int>>& intervals)
{
    multimap<int,int> m;
    for(auto it:intervals){m.insert({it[0],it[1]});}
    int i=0;
    for(auto it:m){intervals[i][0]=it.first;intervals[i][1]=it.second;i++;}
}

vector<vector<int>> merge2(vector<vector<int>>& intervals)
{
    usort(intervals);
    int i=0,j=0;vector<vector<int>> ans;vector<int> v(2);
    while(j<intervals.size())
    {
        if(j==intervals.size()-1)
        {
            v[0]=intervals[i][0];v[1]=intervals[j][1];
            ans.push_back(v);break;
        }
        else if(intervals[j+1][0]<=intervals[j][1])
        {
            if(intervals[j+1][1]<intervals[j][1])
            {
                swap(intervals[j+1][1],intervals[j][1]);
            }
        }
        else
        {
            v[0]=intervals[i][0];v[1]=intervals[j][1];
            ans.push_back(v);i=j+1;
        }
        j++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> v={{1,3},{15,18},{2,6},{17,20},{15,16},{22,23},{16,18}};
    disp(v);
    vector<vector<int>> u=merge2(v);
    disp(v);
    disp(u);
    return 0;
}

/*
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.



Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.



Constraints:

    1 <= intervals.length <= 104
    intervals[i].length == 2
    0 <= starti <= endi <= 104


*/

