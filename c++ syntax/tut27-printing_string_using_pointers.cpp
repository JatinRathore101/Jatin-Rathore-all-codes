#include <iostream>
using namespace std;

void print(int i) {
  cout << " Here is int " << i << endl;
}
void print(double  f) {
  cout << " Here is float " << f << endl;
}
void print(char const *c) {
  cout << " Here is char* " << c << endl; // Whole string can be printed directly using pointers
}




int volume(int s){return s*s*s;}
// float volume(int s){return s*s*s;} together this with previous function create ambiguity
// only difference in return type rest all arguments same does not works;








int main()
{

  print(10);
  print(10.10);
  print("ten");

  cout<<"\n\n";
  char A[]="Jatin_Rathore";
  cout<<A<<"\nThis is easiest way to print a string\n\n";


  int v1;
  v1=volume(2);
  cout<<v1<<"\n\n";





  return 0;


}
