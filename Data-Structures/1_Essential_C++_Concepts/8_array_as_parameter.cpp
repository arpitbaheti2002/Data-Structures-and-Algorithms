#include<bits/stdc++.h>
using namespace std;

// Array is always passed by address
void printArray(int *A, int n)
{
  for(int i=0; i<n; i++)
  {
    cout<<A[i]<<", ";
  }
  cout<<endl;
}

// Functions returning array
int* getArray(int n)
{
  int *arr = new int[n];
  
  for(int i=0; i<n; i++)
  {
    arr[i] = 0;
  }

  return arr;
}

int main()
{
  int A[] = {1,2,3,4,5};
  printArray(A, 5);

  int *B = getArray(5);
  printArray(B, 5);
  
  return 0;
}