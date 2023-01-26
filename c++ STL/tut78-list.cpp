#include<iostream>
#include<list>
using namespace std;

/*

lists in C++ STL (Basically linked list)

A List is a bi-directional linear storage of elements,
which gives faster insertion and deletion operations,
but access to random elements is slow.

An array stores the elements in a contiguous manner in which inserting some
element calls for a shift of other elements, which is time taking. But in a list, we can
simply change the address the pointer is pointing to.
example :-
A->B->C->D
: for deletion say B => A->C->D
: further for addition say between C and D => A->C->E->D

*/

//template<class T>
void disp(list<int> L)
{
    cout<<"\n\nThe elements in list are : ";
    list<int> :: iterator i;
    for(i=L.begin();i!=L.end();i++)
    {
        cout<<*i<<"  ";
    }
    cout<<"\n\n";

}

void disp(list<char> L)
{
    cout<<"\n\nThe elements in list are : ";
    list<char> :: iterator i;
    for(i=L.begin();i!=L.end();i++)
    {
        cout<<*i<<"  ";
    }
    cout<<"\n\n";

}

int main()
{
    list<int> A; // empty list of 0 length
    cout<<"Starting entering integers to the list\nPress 911 for stoping the input operation\n";
    int k;
    while(true)
    {
        cin>>k;
        if(k==911){break;}
        A.push_back(k);
    }
    disp(A);
    A.pop_back();
    cout<<"after list_name.pop_back();";
    disp(A);
    A.pop_front();
    cout<<"after list_name.pop_front();";
    disp(A);
    A.sort();
    cout<<"after list_name.sort();";
    disp(A);

    /* list_name.remove(list_element_value)
    We can remove an element from a list by passing it in
    the list remove method. It will delete all the
    occurrences of that element. The remove method receives
    one value as a parameter and removes all the elements
    which match this parameter.
    */
    list<char> L2(7);
    list<char>::iterator i=L2.begin();
    *i='@';i++;
    *i='#';i++;
    *i='$';i++;
    *i='@';i++;
    *i='z';i++;
    *i='z';i++;
    *i='$';
    disp(L2);
    L2.remove('z');
    cout<<"after list_name.remove(element_value);";
    disp(L2);
    L2.sort();
    cout<<"after list_name.sort();";
    disp(L2);


    return 0;
}

/* function list_name.sort() and list_name.remove(value)
are inbuilt in the <list> header file */

