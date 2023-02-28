#include<bits/stdc++.h>
using namespace std;

/*
Given a string containing digits from 2-9 inclusive,
return all possible letter combinations that the number
could represent. Return the answer in any order. A
mapping of digits to letters (just like on the telephone
buttons) is given below. Note that 1 does not map to
any letters.

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

Example 2:

Input: digits = ""
Output: []

Example 3:

Input: digits = "2"
Output: ["a","b","c"]



Constraints:

    0 <= digits.length <= 4
    digits[i] is a digit in the range ['2', '9'].

*/


/*vector<string> letterCombinations(string digits) // by iteration // high space complexity
{
    unordered_map<char,string> m={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
    vector<string> v;
    if(digits.size()<1){return v;}v={""};

    for(int i=0;i<digits.size();i++)
    {
        string s=m[digits[i]];
        vector<string> u;
        for(int j=0;j<s.size();j++)
        {
            for(int k=0;k<v.size();k++)
            {
                u.push_back(v[k]+s[j]);
            }
        }
        v=u;
    }

    return v;
}*/

void pushRecur(vector<string> &v,string &digits,string output,int i)
{
    if(i>=digits.size()){v.push_back(output);return;}
    unordered_map<char,string> m={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};

    string s=m[digits[i]];
    for(int j=0;j<s.size();j++)
    {
        output.push_back(s[j]);
        pushRecur(v,digits,output,i+1);
        output.pop_back(); // backtracking
    }
}

vector<string> letterCombinations(string digits)
{
    vector<string> v;
    if(digits.size()<1){return v;}
    string output;
    pushRecur(v,digits,output,0);
    return v;
}

int main()
{
    string digits="29";// 2 to 9 //
    vector<string> v=letterCombinations(digits);
    for(auto it:v){cout<<it<<" ";}
    return 0;
}
