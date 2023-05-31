#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

  int* B[3];
  B[0] = new int[4];
  B[1] = new int[4];
  B[2] = new int[4];

  int** C;
  C = new int*[3];
  C[0] = new int[4];
  C[1] = new int[4];
  C[2] = new int[4];

  // Printing the array:
  int n=3, m=4;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
      cout<<setw(4)<<A[i][j];
    cout<<endl;
  }
  cout<<endl;

  // Accessing a single value
  cout<<A[2][2]<<endl;
  
  return 0;
}