#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=1;
        virtual void display(){
            cout<<"1 Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived=2;
            void display(){
                cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    cout<<"\nStatements starting from 1 correspond to base class\nStatements starting from 2 correspond to derived class\n\n";

    base_class_pointer = &obj_derived;
    base_class_pointer->display(); // without virtual keyword it will call display of base // with virtual keyword in display() of base it will call display() of derived
    return 0;
}
