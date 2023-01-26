#include<iostream>
using namespace std;

/*

Inheritance in classes { single A-->B , Multiple (A B C)-->D , hierarchical A-->(B C D) , multilevel A-->B-->C , hybrid When more than one type of inheritance method visible }
class are inherited as public, protected, private(default private if not mentioned)

Mode of inheritance --------------->  private              protected            public
private members of base class         not inherited        not inherited        not inherited
protected members of base class       become private       remain protected     remain protected
public members of base class          become private       become protected     remain public

*/
class Father
{
    int salary;
  //int age;    // Son also has age so we would like son object to store age also which is possible if age in father class is public
    int hieght; // Son also has hieght but here hieght is private => not inherited=> not accessible by son's object=> but functions controlling input and display of hieght are public => inherited and accessible by son's object => we accessed a non inherited member indirectly by inherited function.

public:         // whatever is there in public {age , all 4 functions are present in son class as public}
    int age;
    void hieghtin()
    {
        cout<<"enter hieght ";cin>>hieght;
    }
    void setdata()
    {
        cout<<"\nEnter Father's age and salary ";
        cin>>age>>salary;
    }
    void getdata()
    {
        cout<<"\nFather's age = "<<age<<"\nFather's salary = "<<salary;
    }
    void disphieght()
    {
        cout<<"\nhieght\n= "<<hieght;
    }
};

class Son: public Father
{
    int standard;
public :
    void setdata2()
    {
        cout<<"\nEnter son's age and standard\n";
        cin>>age>>standard;
    }
    void getdata2()
    {
        cout<<"\nson's age = "<<age<<"\nson's standard = "<<standard;
    }
};


int main()
{
    Son S1;
    S1.setdata2();
    S1.hieghtin();
    S1.getdata2();
    S1.disphieght();
    return 0;
}

