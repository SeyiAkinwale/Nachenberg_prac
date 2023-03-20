using namespace std;
#include <iostream>

void findDisorder(int arr[], int n, int* &p)
{
  for (int k =1 ; k < n; k++)
  //maybe look if one short & should start with 0
  {
    if(arr[k] < arr[k-1])
    {
      p = arr + k;
      return;
    }
  }
  p = nullptr;
}

int main ()
{
  int nums[6] = { 10, 20, 20, 40, 30, 50};
  int* ptr;

  findDisorder(nums, 6, ptr);
  if (ptr == nullptr) cout<<" The array is ordered\n";
  else
  {
    cout<< "The disorder is at address " << ptr << endl;
    cout<< "It's at index " << ptr  - nums << endl;
    cout<< "The items's value is" << *ptr << endl;
  }    
  return 0;
}
