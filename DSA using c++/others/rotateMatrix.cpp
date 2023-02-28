#include<bits/stdc++.h>
using namespace std;

void disp(vector<vector<int>>& matrix)
{
    cout<<endl;
    for(auto it:matrix)
    {
        for(auto gt:it)
        {
            cout<<gt<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
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
    vector<vector<int>> matrix={{10,11,12,13},{14,15,16,17},{18,19,20,21},{22,23,24,25}};
    disp(matrix);
    rotate(matrix);
    disp(matrix);
    return 0;
}

