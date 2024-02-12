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

  int max_ele() {
    if(length==0)
      return -1;

    int res = A[0];
    for(int i=1; i<length; i++) {
      res = max(res, A[i]);
    }

    return res;
  }

  int min_ele() {
    if(length==0)
      return -1;

    int res = A[0];
    for(int i=1; i<length; i++) {
      res = min(res, A[i]);
    }

    return res;
  }
};

int main() {
  int temp[] = {1,2,3,4,5,6,7,8,9,10};
  MyArray A(temp, 15, 10);
  cout<<A.max_ele()<<endl;
  cout<<A.min_ele()<<endl;

  return 0;
}