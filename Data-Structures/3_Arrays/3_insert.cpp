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

  void append(int x) {
    if(length==size)
      return;
    
    A[length] = x;
    length++;
  }

  void insert(int x, int idx) {
    if(length==size)
      return;

    for(int i=length; i>=idx; i--) {
      A[i+1] = A[i];
    }

    A[idx] = x;
    length++;
  }
};

int main() {
  int temp[] = {1,2,3,4,5};
  MyArray A(temp, 10, 5);
  A.display();
  A.append(7);
  A.insert(6, 5);
  A.display();

  return 0;
}