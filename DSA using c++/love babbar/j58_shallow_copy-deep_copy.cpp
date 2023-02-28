#include<bits/stdc++.h>
using namespace std;

class Hero
{
    private:
    int age;

    public:
    char *name;
    Hero() {
        name = new char[100];
        age=29;
    }

    Hero(int age) {
        this -> age = age;
    }

    //copy constructor // uncomment this copy constructor(deep copy) to overwrite over the default copy constructor(shallow copy)
    /*Hero(Hero& temp) {

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this -> age = age;

    }*/

    void disp()
    {
        cout<<"name = "<<name<<"       age = "<<age<<endl;
    }

    void setage(int a) {
        age = a;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

};

class Hero2
{
    char name[20];
    int age;
public:
    Hero2() {
        strcpy(name,"Raja Ram");
        age=29;
    }

    Hero2(int age) {
        this -> age = age;
    }

    void disp()
    {
        cout<<"name = "<<name<<"       age = "<<age<<endl;
    }

    void setage(int a) {
        age = a;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

};

int main() {


     Hero hero1;
     hero1.setName("Raja Ram");
     Hero hero2(hero1);
     hero1.disp();hero2.disp();
     hero1.setName("Shri Ram");
     hero1.disp();hero2.disp();
     cout<<"name as pointer => default copy constructor makes shallow copy"<<endl<<endl;

     Hero2 hero3;
     hero3.setName("Raja Ram");
     Hero2 hero4(hero3);
     hero3.disp();hero4.disp();
     hero3.setName("Shri Ram");
     hero3.disp();hero4.disp();
     cout<<"name as character array => default copy constructor makes deep copy"<<endl<<endl;



    return 0;
}

