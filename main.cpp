using namespace std;
#include <iostream>

class Student {
  public:
    string name = "blank";
    int* intPointer = nullptr;
};


int main ()
{
  int x1 = 10, x2 = 20, x3 = 30, x4 = 40;
  // int* ptr1 = &x;

  Student Ade, Femi, Emeka,  Akachi;
  Ade.intPointer = &x1;

  cout <<"*(Ade.intPointer) " <<*(Ade.intPointer);
  
  // cout << "x = " << x << endl;
  // cout << "ptr1 = " << ptr1 << endl;

  // int** ptr2 = &ptr1;
  // cout << "ptr2 = " << ptr2 << endl;

  // **ptr2=200;
  // cout << "x = " << x << endl;

  // int*** ptr3 = &ptr2;
  // ***ptr3 = 300;
  // cout << "x = " << x << endl;

  //int x1 = 10, x2 = 20, x3 = 30, x4 = 40;
  // int* p1 = &x1;
  // int* p2 = &x2;
  // int* p3 = &x3;
  // int* p4 = &x4;
  // int* quartet[]= {p1, p2, p3, p4};
  //int* quartet[]= {&x1, &x2, &x3, &x4};
  // cout << "*p1= " << p1 << " *p2 " << p2 <<endl;
  // cout << "*p3= " << p3 << " *p4 " << p4 <<endl;
  //for (int* i: quartet) {cout<<i<<endl;}
  return 0;
  
}

