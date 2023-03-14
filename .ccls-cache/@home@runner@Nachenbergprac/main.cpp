using namespace std;
#include <iostream>

int main ()
{
  int v1 = 10, v2 = 25;
  int *p1=&v1,*p2 =&v2;

  *p1 += *p2;
  p2 = p1;
  *p2 = *p1 + *p2

  cout<< "*p1 = " << *p1  <<" *p2 = " << *p2
      << " v1 = " << v1   <<" v1  = " << v2 << endl;
}
