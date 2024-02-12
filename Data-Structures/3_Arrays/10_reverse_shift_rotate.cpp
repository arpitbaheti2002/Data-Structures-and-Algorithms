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

  void reverse() {
    int low=0, high=length-1;
    while(low<high) {
      swap(A[low], A[high]);
      low++;
      high--;
    }
  }

  void leftShift() {
    for(int i=1; i<length; i++) {
      A[i-1] = A[i];
    }
    A[length-1] = 0;
  }

  void rightShift() {
    for(int i=length-1; i>0; i--) {
      A[i] = A[i-1];
    }
    A[0] = 0;
  }

  void leftRotate() {
    int temp = A[0];
    for(int i=1; i<length; i++) {
      A[i-1] = A[i];
    }
    A[length-1] = temp;
  }

  void rightRotate() {
    int temp = A[length-1];
    for(int i=length-1; i>0; i--) {
      A[i] = A[i-1];
    }
    A[0] = temp;
  }
};

int main() {
  int temp[] = {1,2,3,4,5,6,7,8,9,10};
  MyArray A(temp, 15, 10);
  A.reverse();
  A.display();
  A.leftRotate();
  A.display();
  A.rightRotate();
  A.display();
  A.leftShift();
  A.display();
  A.rightShift();
  A.display();

  return 0;
}