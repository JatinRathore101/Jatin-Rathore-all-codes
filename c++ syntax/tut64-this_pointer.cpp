#include<iostream>
using namespace std;

// this pointer in C++
// this pointer represents of points to that object which invokes the function

class A
{
    int a;
    public:
        void setData(int a)
        {
            this->a = a;
            cout<<"Calling getData() using this pointer in a member function\n";
            this->getData();
            (*this).getData();
        }

        void getData()
        {
            cout<<"The value of a is "<<a<<endl;
        }
};

int main()
{
    A a;
    a.setData(4);
    cout<<"Calling getData() using object in main()\n";
    a.getData();
    cout<<"\nProperties of this pointer\nThis pointer is only used inside a member function\nfor a statement Obj.memFunc() in main() we can use memFunc(){(*this).   or   this-> } inside the member function\nthis has nothing to do in main() only used in member function\nthis poiner is a way to return the pointer from a member function, pointing to the object which has called that perticular member function\n\n";
    return 0;
}

