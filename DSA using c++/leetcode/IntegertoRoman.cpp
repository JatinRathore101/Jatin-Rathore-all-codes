#include<bits/stdc++.h>
using namespace std;

/*
Integer to Roman
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000


    I can be placed before V (5) and X (10) to make 4 and 9.
    X can be placed before L (50) and C (100) to make 40 and 90.
    C can be placed before D (500) and M (1000) to make 400 and 900.


Example 1:
Input: num = 58
Output: "LVIII"
Explanation: L = 50, V = 5, III = 3.

Example 2:
Input: num = 1994
Output: "MCMXCIV"
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

Constraints:
1 <= num <= 3999

*/

string intToRoman(int num)
{
    vector<vector<string>> v={{"I","II","III","IV","V","VI","VII","VIII","IX"},{"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},{"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},{"M","MM","MMM"}};

    int i=0;
    string roma="";

    while(num!=0)
    {
        if(num%10!=0)
        {
            roma=v[i][num%10-1]+roma;
        }
        num/=10;
        i++;
    }

    return roma;
}

int main()
{
    int num;cin>>num; //  1 <= num <= 3999
    string roman=intToRoman(num);
    cout<<num<<"  =  "<<roman;
    return 0;
}
