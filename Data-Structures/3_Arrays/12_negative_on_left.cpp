#include<bits/stdc++.h>
using namespace std;

class MyArray {
  int *A;
  int size=0;
  int length=0;

  public:
  MyArray(int* arr, int sz, int n) {
    A = new int[sz];
    size = sz;

    for(int i=0; i<n; i++) {
      A[i] = arr[i];
      length++;
    }
  }

  void display() {
    for(int i=0; i<length; i++)
      cout<<A[i]<<", ";
    cout<<endl;
  }

  void negLeft() {
    int i=0, j=length-1;
    
    while(i<j) {
      while(A[i]<0) i++;
      while(A[j]>=0) j--;
      
      if(i<j)
        swap(A[i], A[j]);
    }
  }
};

int main() {
  int temp[] = {-6,3,-8,10,5,-7,-9,12,-4,2};
  MyArray A(temp, 15, 10);
  A.negLeft();
  A.display();

  return 0;
}