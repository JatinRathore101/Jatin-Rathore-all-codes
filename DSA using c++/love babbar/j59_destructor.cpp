#include<bits/stdc++.h>
using namespace std;

class Hero
{
    char name[20];
    int age;
public:
    Hero()
    {
        strcpy(name,"Raja Ram");
        age=29;
    }
    void disp(){cout<<"name = "<<name<<"        age = "<<age<<endl;}
    ~Hero()
    {
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    Hero hero1;
    hero1.disp();

    Hero* HERO2=new Hero;
    HERO2->disp();

    delete HERO2;  // dynamically allocated memory has to be freed manually, this is also true while destroying dynamic object;

    return 0;
}

