#include<iostream>
#include<map>
#include<limits>
using namespace std;
// cin.ignore(numeric_limits<streamsize>::max(),'\n'); after the �cin� statement (here line 23) discards everything in the input stream including the newline. for this we will need to include the header file <limits>

/* maps is C++ STL => A map in C++ STL is an associative
container which stores key value pairs, utilized using the
header file <map>.

*/
void disp(map<string,float> age)
{
    map<string,float>::iterator i;
    // displaying map , (*iterator_name).first=Key and (*iterator_name).second=value
    cout<<"\nData in map\n\n";
    for(i=age.begin();i!=age.end();i++)
    {
        cout<<(*i).first<<" : "<<(*i).second<<"\n";
    }
    cout<<"\n\n";
}

int main()
{
    map<string,float> age;// map <data_type_of_key, data_type_of_value> variable_name;
    age["Jatin"]=20;
    age["Abhay"]=17;
    age["Sagnik"]=21;
    age["Manju"]=45;

    disp(age);

    cout<<"\n\nEnter more data : To stop entering data enter STOP";
    string s;int a;
    while(true)
    {
        cout<<"\n\nEnter Name(key) of person  ";
        cin>>s;
        if(s=="STOP"){break;}
        cout<<"\nEnter age of "<<s<<" ";
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cin>>a;
        age[s]=a;
    }

    disp(age);

    cout<<"\nWe have one moe way to enter data in map // insert function \nsyntax  map_name.insert({{key_1,value_1},{key_2,value_2},{key_3,value_3},......}); \n";
    age.insert({{"Harman",16},{"Kanishk",31},{"Raja Ram",6},{"Saras",11}});

    disp(age);

    cout<<"\nNote that keys have been automatically arranged in ascending order.\n\n";
    return 0;
}

