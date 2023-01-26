/*
vectors in STL
arrays have fixed size but for a vector size can vary.
vector<int> v,v2;
int x=v.size(); // O(1) time complexity.
vector<int> V2=v; // O(n) where n=v.size() => n time complexity operation
hence if possible please pass arguments to a function by reference.
*/

#include<iostream>
#include<vector>
using namespace std;

template<class T> // not using this line will give error
void disp(vector<T> vec)
{
    cout<<"\n\nThe elements of vector are : ";
    for(int i=0;i<vec.size();i++) // vec.size() is correct , size(vec) is wrong
    {
        cout<<vec[i]<<"  ";
    }
}

void disp(vector<pair<int,int>> vec)
{
    cout<<"\n\nThe elements of vector are : ";
    for(int i=0;i<vec.size();i++) // vec.size() is correct , size(vec) is wrong
    {
        cout<<vec[i].first<<"  "<<vec[i].second<<"\n";
    }
}

int main()
{
    vector<pair<int,int>> v={{1,2},{3,4},{5,6}};
    v.push_back({7,8});
    v.push_back(make_pair(9,10));
    disp(v);
    vector<char> vec1; // syntax for declaring vector // vector<data_type> vector_name;
    cout<<"Starting entering characters to the vector\nPress ~ for stoping the input operation\n";
    char k;
    while(true)
    {
        cin>>k;
        if(k=='~'){break;}
        vec1.push_back(k);
    }
    disp(vec1);




    //pop_back() function
    cout<<"\n\nStarting to delete end characters from vector\n\n";
    while(true)
    {
        cout<<"Enter ~ to stop deletion, else enter any character  ";
        cin>>k;
        if(k=='~'){break;}
        vec1.pop_back();
    }
    disp(vec1);
    cout<<"\nNotice when you enter a string instead of single character, then all its elements take consequtive positions in vector.\n\n";




    // vec_name.insert(iterator_name,value) // for this we also need an iterator of same datatype as that of vector.
    vector<int> vec2;
    vector<int> :: iterator b; // vector<int> :: iterator b = vec2.begin(); don't initialize b here // NOT  vec2.front()
    cout<<"\n\nStarting entering integers to the vector\nEnter 911 for stoping the input operation\n";
    int a;
    while(true)
    {
        cin>>a;
        if(a==911){break;}

        if(a>=0)
        {
            b = vec2.begin(); // if b iterator not reallocated to begin() , it will loose its position in memory and program will stop and will not give desired result
            vec2.insert(b,a);
        }
        else
        {
            vec2.push_back(a);
        }
    }
    disp(vec2);
    cout<<"\n\n";
    // vec_name.at(i) = vec_name[i] // both will work the same




    vector<int> V1; // only declaration of vector // only datatype specified, size and members not specified
    vector<char> V2(5); // datatype and size specified
    vector<int> V3(7,5); //
    vector<int> V4(V3); // V4=V3 // V4 initialized by exiating vector // vectors belong to a stl class// hence this format invokes a copy constructor
    vector<char> V5(9,'#');
    disp(V1);
    disp(V2);
    disp(V3);
    disp(V4);
    disp(V5);
    vector<char> :: iterator c=V5.begin(); // directly c=V5[4] etc syntax are wrong.
    //c++;c++;c++;c++;// iterator c now points at V5[4];
    c=c+4;            // iterator c now points at V5[4];
    V5.insert(c,'@'); // when we insert this at index 4 the other element s themselves rearranged their position
    // vector allows both easy substitution (like arrays) and easy insertion .
    disp(V5);
    cout<<"\n\n";

    return 0;
}

/*
inbuilt iterators

v.begin() => v[0] => points to the first element.
v.end() => v[v.size()] => points next to the last element.

iterator it;
(it+1) works in vector (contiguous cells).
(it++) points to next element and also increment in iterator, works in sets and maps also.
(it++) points to next element and also increment in iterator, works in sets and maps also.
(*it) value stored in container at it pointed location.
(*it).first is equivalent to it->first in case of pair.
*/

