using namespace std;
#include <iostream>

int main() 
{
  int i1 = 100, i2;
  int* pi;

  pi = &i1;

  cout<< i1 << *pi;

  *pi = 10;
  cout << i1;

  i2 = *pi;
  cout << i2;
}