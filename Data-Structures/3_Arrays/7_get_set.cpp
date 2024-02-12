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

  int get(int ind) {
    if(ind<0 || ind>=length)
      return -1;
    
    return A[ind];
  }

  void set(int ind, int x) {
    if(ind<0 || ind>=length)
      return;
    
    A[ind] = x;
  }
};

int main() {
  int temp[] = {1,2,3,4,5,6,7,8};
  MyArray A(temp, 15, 8);
  A.display();
  cout<<A.get(4)<<endl;
  A.set(4, 9);
  A.display();

  return 0;
}