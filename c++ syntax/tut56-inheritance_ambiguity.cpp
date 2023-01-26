#include<iostream>
using namespace std;

// ambiguity resolution in inheritance

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet()
        {
            cout << "Kaise ho?" << endl;
        }
};


class Derived : public Base1, public Base2{
   int a;
   public:
    void greet(){
        Base2 :: greet(); // This line pspecifies that we want to use base 2 greet only
        // if instead of above line we would have written   cout<<"How do you do!";    function of derived class overwrite both base class function, though both of them are in herited to derived's public section but still it has higher preferance
    }


};

int main(){
  // Ambibuity 1
     Base1 base1obj;
     Base2 base2obj;
     cout<<"\n\nUsing Base1's object\n";
     base1obj.greet();
     cout<<"\n\nUsing Base2's object\n";
     base2obj.greet();
     cout<<"\n\nUsing Derived's object\n";
     Derived d;
     d.greet();
     cout<<"\n\nSyntax\nvoid greet()          //Derived's greet()\n{\nBase2 :: greet();     //Statement invoking Base2's greet to resolve ambiguity\n}\n\n\n";


    return 0;
}

