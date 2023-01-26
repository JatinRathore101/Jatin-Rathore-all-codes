#include<iostream>
using namespace std;

//Array of objects of a class

class employee
{
    int id;
    int salary;
public:
    void setdata()
    {
        cout<<"\nEnter id of employee ";
        cin>>id;
        cout<<"\nEnter salary of employee ";
        cin>>salary;
    }
    void getdata()
    {
        cout<<"\nSalary of employee with id "<<id<<" is "<<salary<<"\n\n";
    }
};

int main()
{
    employee E[100];
    for(int i=0;i<4;i++)
    {
        E[i].setdata();
    }
    for(int i=0;i<4;i++)
    {
        E[i].getdata();
    }
    return 0;
}

