#include<bits/stdc++.h>
using namespace std;

class Hero
{
    // static int timeToComplete; // then it can't be accessed outside class directly
    public:
    static int timeToComplete;
    int age;
    char *name;


    static int fun_static() {
        timeToComplete+=rand()%timeToComplete;
        timeToComplete++;
        // age++; this will give error cause a static function can only access static variables
        return timeToComplete ;
    }

};

int Hero::timeToComplete = 5;

int main()
{
    Hero a;
    cout << a.timeToComplete << endl;

    Hero b;
    b.timeToComplete = 10 ;
    cout  << a.timeToComplete << endl;
    cout << b.timeToComplete << endl;

    cout << Hero::timeToComplete << endl; // for static data members object not needed
    cout << Hero::fun_static() << endl;

    return 0;
}
