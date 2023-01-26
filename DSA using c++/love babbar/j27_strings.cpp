#include<bits/stdc++.h>
using namespace std;

/*

cin stops execution/input when it encounters
- space
- tab
- enter/newline

*/

int main()
{
/*

'\0' null character -> ASCII = 0 -> tells where the character arrays
data ends
As you've known that std::string doesn't contain the null character
(and it doesn't copy the null character here).
The point is that you're using std::basic_string::operator[].
According to C++11, std::basic_string::operator[] will return a null
character when specified index is equivalent to size().

*/
    char name[20]="Jatin Rathore";
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        cout<<name[i];
    }
    int size_=sizeof(name)/sizeof(char);
    cout<<"\nname[4] = "<<name[4]<<"       i = "<<i<<"       size = "<<size_;
    return 0;
}
