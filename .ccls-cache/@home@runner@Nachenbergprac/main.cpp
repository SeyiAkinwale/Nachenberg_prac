using namespace std;
#include <iostream>

void mystery (int* &ptr, int& a, int& b);

int main ()
{
  int x = 100;
  int* ptr1 = &x;

  cout << "x = " << x << endl;
  cout << "ptr1 = " << ptr1 << endl;
  return 0;
}

