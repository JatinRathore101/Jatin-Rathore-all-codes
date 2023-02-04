#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix)
{
    int r1=0,rn=matrix.size()-1,c1=0,cm=matrix[0].size()-1;
    int i,j;

    vector<int> v((rn+1)*(cm+1));int k=0;
    while(r1<=rn&&c1<=cm)
    {
        if(k==v.size()){break;}

        i=r1;j=c1;
        while(j<=cm){v[k++]=matrix[i][j++];}
        r1++;

        if(k==v.size()){break;}

        i=r1;j=cm;
        while(i<=rn){v[k++]=matrix[i++][j];}
        cm--;

        if(k==v.size()){break;}

        i=rn;j=cm;
        while(j>=c1){v[k++]=matrix[i][j--];}
        rn--;

        if(k==v.size()){break;}

        i=rn;j=c1;
        while(i>=r1){v[k++]=matrix[i--][j];}
        c1++;
    }
    return v;
}

int main()
{
    vector<vector<int>> matrix={{1,2,3,4,5},{7,5,6,7,8}};
    vector<int> v=spiralOrder(matrix);

    for(auto it:v){cout<<it<<" ";}
    return 0;
}
