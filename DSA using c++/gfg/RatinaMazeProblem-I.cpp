#include<bits/stdc++.h>
using namespace std;

/*
Consider a rat placed at (0, 0) in a square matrix
of order N * N. It has to reach the destination at
(N - 1, N - 1). Find all possible paths that the rat
can take to reach from source to destination. The
directions in which the rat can move
are 'U'(up), 'D'(down), 'L' (left), 'R' (right).
Value 0 at a cell in the matrix represents that it
is blocked and rat cannot move to it while value 1
at a cell in the matrix represents that rat can be
travel through it.
Note: In a path, no cell can be visited more than one
time. If the source cell is 0, the rat cannot move to
any other cell.


You don't need to read input or print anything. Complete
the function printPath() which takes N and 2D array m[ ][ ]
as input parameters and returns the list of paths in
lexicographically increasing order.
Note: In case of no path, return an empty list. The driver
will output "-1" automatically.

Expected Time Complexity: O((3N^2)).
Expected Auxiliary Space: O(L * X), L = length of the path,
X = number of paths.

Constraints:
2 ≤ N ≤ 5
0 ≤ m[i][j] ≤ 1
*/

void findPathRecur(vector<string> &v,vector<vector<int>> &m,string output,int i,int j,int n)
{
    if(i>=n-1&&j>=n-1){;v.push_back(output);return;}

    int flag=0;

    if(i+1<n&&j<n){if(m[i+1][j]==1){output.push_back('D');m[i][j]=0;findPathRecur(v,m,output,i+1,j,n);m[i][j]=1;output.pop_back();flag=1;}}

    if(i-1>=0&&j<n){if(m[i-1][j]==1){output.push_back('U');m[i][j]=0;findPathRecur(v,m,output,i-1,j,n);m[i][j]=1;output.pop_back();flag=1;}}

    if(i<n&&j+1<n){if(m[i][j+1]==1){output.push_back('R');m[i][j]=0;findPathRecur(v,m,output,i,j+1,n);m[i][j]=1;output.pop_back();flag=1;}}

    if(i<n&&j-1>=0){if(m[i][j-1]==1){output.push_back('L');m[i][j]=0;findPathRecur(v,m,output,i,j-1,n);m[i][j]=1;output.pop_back();flag=1;}}

    if(flag==0){return;}
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string> v;
    if(n==0||m[n-1][n-1]==0||m[0][0]==0){return v;}
    int i=0,j=0;

    string output;
    findPathRecur(v,m,output,i,j,n);
    return v;
}

int main()
{
    vector<vector<int>> m={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};int n=4;

    vector<string> v=findPath(m,n);

    for(auto it:v){cout<<endl<<it;}

    return 0;
}

