using namespace std;
#include <iostream>

class Node {
  public:
    int** x = nullptr;
    int m = 0;
};


int main ()
{
  int   x0=10;
  int*  y0= &x0;
  int** z0= &y0;
  Node aNode;
  aNode.x=&x0;
  cout<<aNode.m<<endl;
  cout<<"aNode.x = "<< aNode.x;
  int x1 = 10, x2 = 20, x3 = 30, x4 = 40;  

  return 0;
  
}

