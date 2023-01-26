#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;

};

class Derived: protected Base{

};

int main(){
    Base b;
    Derived d;
    //cout<<d.a; // Will not work since a is protected in both base as well as derived class, even though a became protected member of derived

    /*
    Protected data members follow all features of private data members
    except that they can be inherited.
    Private: The class members declared as private can be accessed
    only by the functions inside the class. They are not allowed to be
    accessed directly by any object or function outside the class. Only
    the member functions or the friend functions are allowed to access
    the private data members of a class.. Protected members in a class
    are similar to private members as they cannot be accessed from outside
    the class.
    */
    return 0;
}

