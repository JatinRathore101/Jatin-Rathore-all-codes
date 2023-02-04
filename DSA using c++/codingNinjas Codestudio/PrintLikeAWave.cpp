#include<bits/stdc++.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> a(nRows*mCols);
    for(int i=0;i<nRows;i++)
    {
        for(int j=0;j<mCols;j++)
        {
            if(j%2==0)
            {
                a[nRows*j+i]=arr[i][j];
            }
            else
            {
                a[nRows*j-i+nRows-1]=arr[i][j];
            }
        }
    }
    return a;
}

int main()
{
    vector<int> a=wavePrint({{1,2,3,4},{5,6,6,8},{9,10,11,12}},3,4);
    for(auto it:a){cout<<it<<"  ";}
    return 0;
}

