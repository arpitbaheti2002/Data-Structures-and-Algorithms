#include<iostream>
using namespace std;

int main()
{
  // Static array:
  int sA1[5];

  // // only in c++
  int n;
  cout<<"Enter size of array: ";
  cin>>n;
  int sA2[n];

  // Dynamic array:
  int* dA1 = new int[n];
  delete []dA1;
  dA1 = NULL;
  
  return 0;
}