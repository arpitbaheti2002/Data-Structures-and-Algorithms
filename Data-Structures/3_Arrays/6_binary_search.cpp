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

  int bin_search(int x) {
    if(!isSorted()) {
      cout<<"Array is not sorted"<<endl;
      return -1;
    }

    int low=0, high=length-1, res=-1;

    while(low<=high) {
      int mid = low + (high-low)/2;

      if(A[mid]==x) {
        res = mid;
        high = mid-1;
      }
      else if(A[mid]<x) {
        low = mid+1;
      }
      else {
        high = mid-1;
      }
    }

    return res;
  }
};

int main() {
  int temp1[] = {1,2,3,4,5,6,7,8,9,10};
  int temp2[] = {6,8,4,3,5,1,7,2,9,10};
  MyArray A1(temp1, 15, 10);
  A1.display();
  cout<<A1.bin_search(6)<<endl;

  MyArray A2(temp2, 15, 10);
  A2.display();
  cout<<A2.bin_search(6)<<endl;

  return 0;
}