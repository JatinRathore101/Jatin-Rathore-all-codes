#include<bits/stdc++.h>
using namespace std;

int main()
{
    int basic_array[4]={1,2,3,4};
    array<int,4> STL_array={1,2,3,4}; // it has normal static array implementation

    for(auto it:basic_array){cout<<it<<" ";}cout<<endl;
    for(auto it:STL_array){cout<<it<<" ";}cout<<endl;

    cout<<STL_array.front()<<"  "<<STL_array.back()<<endl;
    cout<<STL_array.empty(); // to check if empty or not
    return 0;
}

