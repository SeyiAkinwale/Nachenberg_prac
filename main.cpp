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
  Ade.name   = "Ade";   Femi.name   = "Femi";
  Emeka.name = "Emeka"; Akachi.name = "Akachi";
  Ade.intPointer = &x1;
  Femi.intPointer = &x2;
  Emeka.intPointer = &x3;
  Akachi.intPointer = &x4;

  cout <<"*(Ade.intPointer)    " <<   *(Ade.intPointer)<<endl;
  cout <<"*(Femi.intPointer)   " <<  *(Femi.intPointer)<<endl;
  cout <<"*(Emeka.intPointer)  " << *(Emeka.intPointer)<<endl;
  cout <<"*(Akachi.intPointer) " <<*(Akachi.intPointer)<<endl;

  Student* studentInfo[]={&Ade, &Femi, &Emeka, &Akachi};
  cout<< "Ade.name " << Ade.name << endl;
  cout<< "*(studentInfo[0])->intPointer " <<   *(studentInfo[0]->intPointer) <<endl;

  *(studentInfo[0]->intPointer)=23;
    cout<< "*(studentInfo[0])->intPointer " << *(studentInfo[0]->intPointer) <<endl;

  return 0;
  
}

