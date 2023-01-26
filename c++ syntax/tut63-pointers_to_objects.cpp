#include<iostream>
#include<cstdlib>
using namespace std;

// pointers of objects // Array of objects

class Complex
{
    int real;
    int imaginary;
public:
    void setdata(int a,int b)
    {
        real=a;imaginary=b;
    }
    void getdata()
    {
        cout<<"Complex number is = ("<<real<<") + i("<<imaginary<<")\n";
    }
};

int main()
{
    Complex Z;
    Z.setdata(2,5);
    Complex* Z1=&Z; //  Complex *Z1=&Z;  //Complex*Z1=&Z;  // All these three syntax are correct
    (*Z1).getdata();  //  *(Z1).getdata();  //  *Z1.getdata();  // both these syntax are wrong for invoking a member function using dereferenced object pointer only //  (*Z1).getdata();  // is correct
    (*Z1).setdata(-2,1); // This syntax is only correct here as .DOT has higher precedence than *ASTRICK and ()PARANTHESIS
    Z1->getdata(); // exactly same function as (*Z1).getdata() //  only (*Z1).  is replaced by Z1->
    Z.getdata();

    Complex *Z2= new Complex; // Z2 is dynamically allocated, it does not holds an address of existing object insted it is directly assigned an address to store an object called as *Z2
    Z2->setdata(4,5);
    (*Z2).getdata();
    cout<<"\nZ1->getdata(); // exactly same function as (*Z1).getdata() //  only (*Z1).  is replaced by Z1->\n";

    cout<<"\nEnter size of array of objects\n";
    int n;cin>>n;
    Complex *Z3= new Complex[n];
    for (int i=0;i<n;i++)
    {
        (Z3+i)->setdata(rand()%10-i,rand()%10+i); // Be remember rand() takes no input;
        (*(Z3+i)).getdata(); // both (Z3+i)->  and  (*(Z3+i)).  are valid syntax
    }

    cout<<"\n\n";
    int size = 3;
    Complex *ptr = new Complex [size];
    Complex *ptrTemp = ptr; // since in this net loop formet ptr will change position due to ++ so we store initial ptr ie. first object's address in ptrTemp
    int p,q,i;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter real and imaginary part of object "<< i+1<<endl;
        cin>>p>>q;
        // (*ptr).setdata(p, q);
        ptr->setdata(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        ptrTemp->getdata();
        ptrTemp++;
    }
    cout<<"\n\n";

    return 0;
}