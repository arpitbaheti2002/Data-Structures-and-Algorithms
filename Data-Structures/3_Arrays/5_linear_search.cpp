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

  int search(int x) {
    for(int i=0; i<length; i++) {
      if(A[i]==x)
        return i;
    }

    return -1;
  }
};

int main() {
  int temp[] = {1,2,3,4,5};
  MyArray A(temp, 10, 5);
  A.display();
  cout<<A.search(4)<<endl;
  cout<<A.search(10)<<endl;

  return 0;
}