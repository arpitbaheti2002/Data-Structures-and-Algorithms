#include<bits/stdc++.h>
using namespace std;

int main(){
  // 1D array

  // static allocation:
  int A1[5];
  int A2[5] = {1,2,3,4,5};
  int A3[] = {1,2,3,4,5};
  int A4[5] = {1,2};
  int A5[5] = {0};

  // dynamic allocation
  int* B1 = new int[5];

  // traversing
  for(int i=0; i<5; i++)
    cout<<A2[i]<<", ";
  cout<<endl;

  for(int a:A2)
    cout<<a<<", ";
  cout<<endl;

  // 2D arrays

  int C1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  int* C2[3];
  C2[0] = new int[3]; 
  C2[1] = new int[3]; 
  C2[2] = new int[3]; 

  int** C3 = new int*[3];
  C3[0] = new int[3]; 
  C3[1] = new int[3]; 
  C3[2] = new int[3]; 
  
  // traversing
  for(int i=0; i<3; i++) {
    for(int j=0; j<3; j++) {
      cout<<C1[i][j]<<", ";
    }
    cout<<endl;
  }

  return 0;
}