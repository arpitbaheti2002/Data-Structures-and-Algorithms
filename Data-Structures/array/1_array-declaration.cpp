#include<iostream>
using namespace std;

int main()
{
  // There are various ways to declare an array
  int A[5];
  int B[5] = {2,4,6,8,10};
  int C[5] = {2,4};
  int D[5] = {0};
  int E[] = {1,3,5,7,9};

  // Printing an array
  int n = 5;

  for(int i=0; i<n; i++)
  {
    cout<<B[i]<<", ";
  }
  cout<<endl;

  for(int i=0; i<n; i++)
  {
    cout<<E[i]<<", ";
  }
  cout<<endl;


  // Access a specific cell of an array
  cout<<"C[1] = "<<C[1]<<endl;
  cout<<"1[C] = "<<1[C]<<endl;
  cout<<"*(C+1) = "<<*(C+1)<<endl;
  
  return 0;
}