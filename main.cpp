using namespace std;
#include <iostream>

const char* findTheChar(const char str[], char chr)
{
  for (int k = 0; *(str+k) != 0; k++)
    if (*(str+k) == chr)
    { 
      return &str[k];
    }
}


int main ()
{
  char vals[]={'a','b','c','h','k','\0'};

  cout<<findTheChar(vals, 'c');
  return 0;
}
