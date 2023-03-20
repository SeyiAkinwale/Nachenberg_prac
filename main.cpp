using namespace std;
#include <iostream>
#include <cmath>

bool match(const char str1[], const char str2[])
{
  while (str1 != 0 && str2 !=0) //zero bytes at ends
  {
    if(str1 != str2) //compare corresponding characters
      return false;
    str1++;
  }
}

int main ()
{

  return 0;
}
