using namespace std;
#include <iostream>

double computeAverage(const double* scores, int nScores)
{
  const double* ptr = scores;
  double tot = 0;
    int i = 0;
    while ((ptr+i) != scores + nScores)
    {
      //cout<<"hello";
        tot += *(ptr+i);
        i++;
    }
  return tot/nScores;
}


int main ()
{
  double vals[]={1,2,2,7};
  int ARRAY_SIZE=4;
  cout<<computeAverage(vals, ARRAY_SIZE);
  return 0;
}
