#include<bits/stdc++.h>
using namespace std;

int* merge(int* A, int* B, int n, int m) {
  int* C = new int[n+m];
  int i=0, j=0, k=0;

  while(i<n && j<m) {
    if(A[i]<=B[j]) {
      C[k] = A[i];
      i++;
      k++;
    }
    else {
      C[k] = B[j];
      j++;
      k++;
    }

  }

  while(i<n) {
    C[k] = A[i];
    i++;
    k++;
  }

  while(j<m) {
    C[k] = B[j];
    j++;
    k++;
  }

  return C;
}

int main() {
  int A[] = {3,8,16,20,25};
  int B[] = {4,10,12,22,23};
  int* C = merge(A, B, 5, 5);

  for(int i=0; i<10; i++) {
    cout<<C[i]<<", ";
  }
  cout<<endl;

  return 0;
}