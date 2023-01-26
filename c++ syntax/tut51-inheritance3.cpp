#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId) // from here the compiler goes to default constructor of employee and returns after that it enters this function and assigns value 10 to impid , if we comment out line 15 ie. default constructor of employee the program will give error
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee SanGket(1), Sagnik(2);
    cout << SanGket.salary << endl;
    cout << Sagnik.salary << endl;
    Programmer Jatin(10);
    cout << Jatin.languageCode<<endl;
    cout << Jatin.id<<endl;
    Jatin.getData();
    return 0;
}
