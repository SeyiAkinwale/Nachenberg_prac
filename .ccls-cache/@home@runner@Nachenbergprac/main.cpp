using namespace std;
#include <iostream>

void mystery (int* &ptr, int a, int** b);

int main ()
{
  int num1 = 15, num2 = 9, num3 = 10;
  int *p = &num1;

  mystery(p, num2, &p);

  cout << "num1: " << num1 << "num2: " <<num2;
  cout << "num3: " << num3 << endl;

  if (p == &num1) cout << " num1";
  else if (p == &num2) cout << " num2";
  else if (p == &num3) cout << " num3";
  return 0;
}

void mystery (int* &ptr, int a, int** b)
{
  a++;
  if (a> **b)
    ptr = &a;
  else
  {
    ptr = *b;
    *b = &a;
  }
  (*ptr) +=10;
}

