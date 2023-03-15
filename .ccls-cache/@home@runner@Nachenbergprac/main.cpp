using namespace std;
#include <iostream>

void mystery (int* &ptr, int& a, int& b);

int main ()
{
  int x = 100;
  int* ptr1 = &x;

  cout << "x = " << x << endl;
  cout << "ptr1 = " << ptr1 << endl;

  int** ptr2 = &ptr1;
  cout << "ptr2 = " << ptr2 << endl;

  **ptr2=200;
  cout << "x = " << x << endl;
  return 0;
}

