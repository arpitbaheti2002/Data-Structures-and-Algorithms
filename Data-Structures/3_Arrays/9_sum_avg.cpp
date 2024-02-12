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

  int sum() {
    int res=0;
    for(int i=0; i<length; i++) {
      res += A[i];
    }

    return res;
  }

  float avg() {
    float s = sum();
    return s/length;
  }
};

int main() {
  int temp[] = {1,2,3,4,5,6,7,8,9,10};
  MyArray A(temp, 15, 10);
  cout<<A.sum()<<endl;
  cout<<A.avg()<<endl;

  return 0;
}