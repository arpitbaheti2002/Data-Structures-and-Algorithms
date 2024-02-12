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

  void del(int idx) {
    if(idx<0 || idx>=length)
      return;

    for(int i=idx; i<length-1; i++) {
      A[i] = A[i+1];
    }
    length--;
  }
};

int main() {
  int temp[] = {1,2,3,4,5};
  MyArray A(temp, 10, 5);
  A.display();
  A.del(2);
  A.display();
  A.del(10);
  A.display();

  return 0;
}