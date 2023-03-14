using namespace std;
#include <iostream>

int main ()
{
  int nums []={2,4,6, 1,2,3};
  int *p = nums;

  while (p < nums + 6)
  {
    if (*p % 3 == 0)
      *p = *p +1;
    else if(*p % 2 == 0)
    {
      *p +=2;
      p = p + 1;
    }
    p = p +1;
  }
  for (int i = 0; i<6; i++) cout << nums[i] << " ";
}
