#include<bits/stdc++.h>
using namespace std;

/*
Zigzag Conversion
Medium

The string "PAYPALISHIRING" is written in a zigzag pattern on a
given number of rows like this: (you may want to display this
pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R

And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion
given a number of rows n:

string convert(string s, int n);



Example 1:
Input: s = "PAYPALISHIRING", n = 3
Output: "PAHNAPLSIIGYIR"

Example 2:
Input: s = "PAYPALISHIRING", n = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I

Example 3:
Input: s = "A", n = 1
Output: "A"


Constraints:
-   1 <= s.length <= 1000
-   s consists of English letters (lower-case and
    upper-case), ',' and '.'.
-   1 <= n <= 1000




n=2
0   2   4   6   8   10
1   3   5   7   9

n=3
0       4       8       12
1   3   5   7   9   11  13
2       6       10
can be simplified to
0       4       8       12
1   3   5   7   9   11  13
2       6       10


n=4
0           6           12
1       5   7       11  13
2   4       8   10      14
3           9           15
can be simplified to
0       6       12
1   5   7   11  13
2   4   8   10  14
3       9       15


n=5
0               8               16
1           7   9           15  17
2       6       10      14      18
3   5           11  13          19
4               12              20
can be simplified to
0       8       16
1   7   9   15  17
2   6   10  14  18
3   5   11  13  19
4       12      20

*/




/*// LEETCODE SOLUTION
string convert(string s, int numRows) {

        if (numRows == 1) return s;

        vector<string> rows(min(numRows, int(s.size())));
        int curRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[curRow] += c;
            if (curRow == 0 || curRow == numRows - 1) goingDown = !goingDown;
            curRow += goingDown ? 1 : -1;
        }

        string ret;
        for (string row : rows) ret += row;
        return ret;
    }
*/

// OWN SOLUTION
string convert(string s, int numRows)
{
    if((numRows<2)||(s.size()<=numRows)){return s;}
    int n=s.size();
    vector<vector<char>> v;

    int i=0,k=0;
    while(k<n)
    {
        vector<char> t(numRows);
        if(i%2==0)
        {
            for(int j=0;j<numRows;j++)
            {
                t[j]=s[k];k++;
                if(k==n){break;}
            }
        }
        else
        {
            for(int j=numRows-2;j>0;j--)
            {
                t[j]=s[k];k++;
                if(k==n){break;}
            }
        }
        v.push_back(t);
        i++;
    }

    string r;
    for(int j=0;j<numRows;j++)
    {
        for(i=0;i<v.size();i++)
        {
            if(v[i][j]!=' ')//((isalpha(v[i][j]))||(v[i][j]==',')||(v[i][j]=='.'))
            {
                if((isalpha(v[i][j]))||(v[i][j]==',')||(v[i][j]=='.'))
                {r.push_back(v[i][j]);}
            }
        }
    }
    return r;
}

int main()
{
    int n,r;cin>>n>>r;
    string s;//="PAYPALISHIRING";int r=4;
    for(int i=0;i<n;i++){s.push_back(char('a'+rand()%7));}
    cout<<endl<<s<<endl;
    string t=convert(s,r);
    cout<<t<<endl;

    return 0;
}
