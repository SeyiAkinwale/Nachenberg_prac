using namespace std;
#include <iostream>

double computeAverage(const double* scores, int nScores)
{
  const double* ptr = scores;
  double tot = 0;
  while (ptr!= scores + nScores)
    {
      tot += *ptr;
      ptr++;
    }
  return tot/nScores;
}


int main ()
{
  double vals[]={1,2,2,7};
  int ARRAY_SIZE;
  cout<<computeAverage(vals, ARRAY_SIZE);
  return 0;
}
