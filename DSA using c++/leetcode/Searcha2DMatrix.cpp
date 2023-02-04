#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target)
{
    //I=i*matrix[0].size()+j;

    int b=0,e=matrix.size()*matrix[0].size()-1,mid;

    while(b<=e)
    {
        mid=b+(e-b)/2;
        int j=mid%matrix[0].size();
        int i=(mid-j)/matrix[0].size();
        //cout<<"mid = "<<mid<<"       i = "<<i<<"       j = "<<j<<endl;
        if(matrix[i][j]==target){return true;}
        else if(matrix[i][j]<target){b=mid+1;}
        else if(matrix[i][j]>target){e=mid-1;}
    }

    return false;
}

int main()
{
    int target=9;
    vector<vector<int>> matrix={{1,2,3,4,5},{6,7,8,9,10},{11,13,14,15,16}};
    cout<<searchMatrix(matrix,target);
    return 0;
}
