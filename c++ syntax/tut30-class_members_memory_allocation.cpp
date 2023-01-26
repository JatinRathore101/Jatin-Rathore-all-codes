#include<iostream>
using namespace std;

/* in creating of different objects of a class the c++
   compiler is very smart it assignes different memmories
   for member variables of objects but member functions
   of all object are common
*/

class shop
{
    int id[10];
    int price[10];
    int counter;
public:
    void initCounter(){counter=0;};
    void setdata();
    void getdata();
};

void shop ::setdata()
{
    cout<<"\nEnter id of the item ";
    cin>>id[counter];
    cout<<"\nEnter price of the item ";
    cin>>price[counter];
    cout<<"\n";
    counter++;
}

void shop ::getdata()
{
    for (int i=0;i<counter;i++)
    cout<<"The price of item with id  "<<id[i]<<"  is  "<<price[i]<<"\n\n";
}

int main()
{
    shop S1;
    S1.initCounter();
    // for 4 items;
    for (int i=0;i<4;i++)
    {
        S1.setdata();
    }
    cout<<"\n\n";
    S1.getdata();


    return 0;
}

/*
   Since we have not changed our object S1,
   hence the value of counter is retained and
   with successive adding of data , but what
   if we want to retain last value of counter
   for different objects of same class, well
   here we use static variables and static
   functions.
*/
