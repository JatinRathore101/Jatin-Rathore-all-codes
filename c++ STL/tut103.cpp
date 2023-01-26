#include<bits/stdc++.h>
using namespace std;

/*
all_of, none_of, any_of
these return true or false

lambda functions example:-
[](int x,int y){return x+y;}(4,7);
auto prod=[](int x,int y){return x*y;}(2,3);

one line if condition
cout<<(x>y)?x:y;
(if)?(then):(else);
*/

bool is_positive(int x){return x>0;}

int main()
{
    auto prod=[](int x,int y){cout<<x*y<<endl; return 0;}(2,3);
    int x=2,y=3;
    int z=(x==y)?x:y;
    cout<<z<<endl<<endl;

    vector<int> v={2,4,6,7};

    cout<<all_of(v.begin(),v.end(),[](int x){return x%2==0;})<<endl;

    cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;

    cout<<none_of(v.begin(),v.end(),[](int x){return x<0;})<<endl;

    return 0;
}

