#include <iostream>
using namespace std;

int* minimart(int* a, int* b)
{
  if(*a < *b) return a;
  else return b;
}

