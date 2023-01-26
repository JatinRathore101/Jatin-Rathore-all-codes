/*
To store first_name last_name, total_courses(vector-size), marks in
each course, then display all these names and marks with names
alphabetical.

first_name   last_name     total_courses      marks
Jatin        Rathore          7               99  97  100 87  91  93  100
Sagnik       Barman           5               61  68  74  70  85
Sangket      Goreghate        4               44  58  50  59
Aswath       Narayan          2               39  51
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string,string>,vector<int>> m;
    int n;cin>>n; // n=4
    for(int i=0;i<n;i++)
    {
        string fn,ln; int Vsize;vector<int> marks;
        cin>>fn>>ln>>Vsize;
        for(int j=0;j<Vsize;j++)
        {
            int mk;
            cin>>mk;
            marks.push_back(mk);
        }
        m.insert({{fn,ln},marks});
    }
    cout<<endl<<endl;
    for(auto it:m)
    {
        cout<<(it.first).first<<"  "<<(it.first).second<<"  "<<"Total courses = "<<(it.second).size()<<"    Marks : ";
        for(auto vt:(it.second))
        {
            cout<<"  "<<vt;
        }cout<<endl;
    }
    return 0;
}

