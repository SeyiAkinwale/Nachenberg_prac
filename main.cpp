using namespace std;
#include <iostream>

int* wedgie(void)
{
  static int foo = 7;
  cout << foo;
  return (&foo);
}

int main() 
{
  int *blah;
  blah = wedgie();
}