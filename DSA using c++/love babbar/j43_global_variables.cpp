#include<iostream>
using namespace std;

// Not recommended to use global variables unless changes to it are acceptable
// because global variables can be changed from any where.
// local variables preffered over global // so inside a block to access a global a variable use scope resolution :: sign.

int score = 15;

void a(int& i) {

    cout << score << " in a" << endl;
    score++;
    char ch = 'a';
    cout << i << endl;
}

void b(int& i) {
    cout << score << " in b" << endl;
    cout << i << endl;
}

int main() {
    double score=7.777;
    cout << score<<"  "<<::score << " in main" << endl;
    int i = 5;
    a(i);
    b(i);

    return 0;
}
