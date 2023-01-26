#include<bits/stdc++.h>
using namespace std;

// Algorithms

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);

    cout<<binary_search(v.begin(),v.end(),1)<<endl;
    cout<<binary_search(v.begin(),v.end(),2)<<endl;

    /*cout<<lower_bound(v.begin(),v.end())<<endl;
    cout<<upper_bound(v.begin(),v.end())<<endl;*/

    int a=2,b=7;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"max(a,b) = "<<max(a,b)<<endl;
    cout<<"min(a,b) = "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    string abcdefghi="abcdefghi";
    cout<<endl<<abcdefghi<<endl;
    reverse(abcdefghi.begin(),abcdefghi.end());
    cout<<abcdefghi<<endl;
    rotate(abcdefghi.begin(),abcdefghi.begin()+2,abcdefghi.end());
    cout<<abcdefghi<<endl;

    return 0;
}

