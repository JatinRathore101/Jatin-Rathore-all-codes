#include<iostream>
using namespace std;

/* structure is an user defined datatype.
   We can create a data type using struct keyword.
   after that we can use that created data type to declara variables
*/

struct employee
{
    int id;
    char fav;
    float salary;
};

int main()
{
    employee Jatin;
    Jatin.id=16;
    Jatin.fav='e';
    Jatin.salary=1400000;

    cout<<"\n"<<Jatin.salary<<endl;

    employee emp[10];

    for(int i=0;i<20;i++)
    {
        emp[i].id=i+1;
        emp[i].salary=10000+i*100;
    }

    cout<<endl<<"Salary of 10th employee = "<<emp[9].salary<<endl;
    cout<<"ID of 7th employee = "<<emp[6].id<<endl;

















    cout<<"\nThe use of typedef";
    /* typedef is just another name of a datatype
       syntax
       typedef int sagnik
       now we can initialize an integer by
       sagnik a=10;
    */
    typedef int Sagnik;
    Sagnik x=10;
    cout<<"\nx of Sagnik type = "<<x<<"\n\n";

    typedef employee EP;
    EP Sathwik;
    Sathwik.salary=1000000;
    cout<<Sathwik.salary<<endl<<endl;














    /*
      Union just completely same as Structure only difference
      is that we can use only one category inside it at time
      hence it saves memory;

      struct S1{int a; float b; char c;} memory assigned to one S1 type variable = 4+4+1 = 9

      union U1{int d; float e; char f;} memory assigned to one S1 type variable = 4 (max of sub datatypes)

    */

    union soldier{
    int age;
    int height_in_cms;
    float weight; };

    soldier Vinod;
    Vinod.weight=81;
    cout<<endl<<Vinod.weight<<endl;
    Vinod.height_in_cms=178;
    cout<<endl<<Vinod.weight<<"    this variable has garbage now since union stores one at a time now height_in_cms has the value"<<endl;
    cout<<endl<<Vinod.height_in_cms<<endl<<endl<<endl;
















// Enumeration in C++ represent integral constants represented by some names keyword (enum)

enum week{sun,mon,tue,wed,thu,fri,sat};
cout<<"\nsun = "<<sun<<"  ";
cout<<"\nmon = "<<mon<<"  ";
cout<<"\ntue = "<<tue<<"  ";
cout<<"\nwed = "<<wed<<"  ";
cout<<"\nthu = "<<thu<<"  ";
cout<<"\nfri = "<<fri<<"  ";
cout<<"\nsat = "<<sat<<"  ";


week fourth,seventh;
fourth=sun;
seventh=wed;
cout<<endl<<endl<<fourth+3;
cout<<endl<<seventh+2<<"\n\n\n";


return 0;
}
