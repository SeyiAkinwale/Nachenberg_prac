using namespace std;
#include <iostream>

const char* findTheChar(const char* str, char chr)
{
  char* pointerTemp=nullptr;
  //pointerTemp = str;
  for (int k = 0; *(str+k) != 0; k++)
    if (*(str+k) == chr)
    { 
      return (str+k);
    }

  return nullptr;
}


int main ()
{
  char vals[]={'a','b','c','h','k','\0'};

  cout<<findTheChar(vals, 'c');
  return 0;
}
