#include<iostream>
using namespace std;

// Polymorphism

class BaseClass{
    public:
        int var_base;
     // virtual void display()
        void display()
        {
            cout<<"\ndisplay(); from base class\n";
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived;
            void display(){
                cout<<"\ndisplay(); from derived class\n";
                cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class // This assignment of pointer of base class to address of derived class object is competely fine
    // Though base pointer pointer can only access INHERITED members of base class to derive class // to change this behaviour we use // virtual // keyword

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived= 134; // Will throw an error
    base_class_pointer->display();

    base_class_pointer->var_base = 3400;
    base_class_pointer->display(); // Currently this statement will execute line 9 {base function, even though it points to derived's object} , but if line 9  has virtual keyword like //  virtual void display()  // Then it will call execute line 18 {derived function}

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    return 0;
}


/*
Polymorphism in C++
  1 compile time polymorphism (early binding)
    1.1 using function overloading
    1.2 using operator overloading
  2 run time polymorphism (late binding)
    2.1 using virtual function
*/
