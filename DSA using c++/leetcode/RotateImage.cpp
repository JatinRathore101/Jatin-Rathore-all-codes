#include<bits/stdc++.h>
using namespace std;

void disp(vector<vector<int>>& matrix)
{
    for(int i=0;i<matrix.size();i++)
    {
        for(auto it:matrix[i])
        {
            cout<<it<<"  ";
        }
        cout<<endl;
    }
}

void rotate(vector<vector<int>>& matrix)
{
    int i=0,j=matrix.size()-1;
    while(i<j){swap(matrix[i],matrix[j]);i++;j--;}

    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }

}

int main()
{
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    disp(matrix);
    rotate(matrix);
    cout<<endl;
    disp(matrix);
    return 0;
}

