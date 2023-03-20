using namespace std;
#include <iostream>
#include <cmath>

void hypotenuse(double leg1, double leg2, double* &resultPtr)
{
  *resultPtr = sqrt(leg1*leg1 + leg2*leg2);
}

int main ()
{
  double* p;
  double  x1 = 0; double* p= &x1;
  
  //hypotenuse(1.5, 2.0, p);
  cout << "The hypotenuse is " << *p << endl;
  return 0;
}
