#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    // vector size => how many  elements are there in vector // vector capacity => how much space is assigned to the vector //
    v.push_back(1);
    cout<<"vector size = "<<v.size()<<"         vector capacity = "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"vector size = "<<v.size()<<"         vector capacity = "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"vector size = "<<v.size()<<"         vector capacity = "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"vector size = "<<v.size()<<"         vector capacity = "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"vector size = "<<v.size()<<"         vector capacity = "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"vector size = "<<v.size()<<"         vector capacity = "<<v.capacity()<<endl;
    v.push_back(7);
    cout<<"vector size = "<<v.size()<<"         vector capacity = "<<v.capacity()<<endl;

    cout<<endl<<"v.front() = "<<v.front()<<"       v.back() = "<<v.back()<<endl<<endl;

    vector<int> v2(v); // v2=v // creating completely same vector as v //
    for(auto it:v2){cout<<it<<"  ";}cout<<endl<<endl;

    v.pop_back();
    cout<<"vector size = "<<v.size()<<"         vector capacity = "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"vector size = "<<v.size()<<"         vector capacity = "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"vector size = "<<v.size()<<"         vector capacity = "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"vector size = "<<v.size()<<"         vector capacity = "<<v.capacity()<<endl;
    v.clear();
    cout<<"vector size = "<<v.size()<<"         vector capacity = "<<v.capacity()<<endl;


    vector<int> v3(5,2);cout<<endl; // initialize vector of size 5 with all elements equal to 2 //
    for(auto it:v3){cout<<it<<"  ";}cout<<endl<<endl;

    return 0;
}

