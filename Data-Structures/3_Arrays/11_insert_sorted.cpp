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

  bool isSorted() {
    for(int i=1; i<length; i++) {
      if(A[i]<A[i-1])
        return false;
    }
      return true;
  }

  void insert_sorted(int x) {
    if(!isSorted()) {
      cout<<"Array is not sorted"<<endl;
    }

    else if(length+1 > size)
      return;

    int idx = length-1;
    while(A[idx]>x) {
      A[idx+1] = A[idx];
      idx--;
    }

    A[idx+1] = x;
    length++;
  }
};

int main() {
  int temp[] = {1,2,3,4,5,6,8,9,10};
  MyArray A(temp, 15, 9);
  A.insert_sorted(7);
  A.display();

  return 0;
}