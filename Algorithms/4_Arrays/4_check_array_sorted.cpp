#include<bits/stdc++.h>
using namespace std;

// Return true if array is Sorted, else return false
bool isSorted(vector<int> arr) {
  int n=arr.size();

  for(int i=1; i<n; i++) {
    if(arr[i]<arr[i-1])
      return false;
  }

  return true;
}

// Time Complexity : 	Θ(n)

int main() {
  vector<int> arr1({8,12,15});
  cout<<isSorted(arr1)<<endl;

  vector<int> arr2({8,10,10,12});
  cout<<isSorted(arr2)<<endl;
  
  vector<int> arr3({100});
  cout<<isSorted(arr3)<<endl;
  
  vector<int> arr4({100,20,200});
  cout<<isSorted(arr4)<<endl;

  return 0;
}