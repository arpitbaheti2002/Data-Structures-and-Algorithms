#include<bits/stdc++.h>
using namespace std;

// Given a sequence arr[] of size n, Write a function int equilibrium(int[] arr, int n) 
// that returns an equilibrium index (if any) or -1 if no equilibrium index exists. 

int equilibriumIndex(vector<int> &arr) {
  int n=arr.size(), sum=0, lSum=0;

  // calculate the sum of the array
  for(int i=0; i<n; i++) {
    sum += arr[i];
  }

  // Now, keep track of the leftSum, and using leftSum we can calculate rightSum
  // Point where leftSum == rightSum. We can return that index

  for(int i=0; i<n; i++) {
    if(lSum == sum-lSum-arr[i]) {
      return i;
    }
    lSum += arr[i];
  }

  return -1;
}

int main(){
  vector<int> arr1({3,4,8,-9,20,6});
  cout<<equilibriumIndex(arr1)<<endl;         //4

  vector<int> arr2({4,2,-2});
  cout<<equilibriumIndex(arr2)<<endl;         //0

  vector<int> arr3({4,2,2});
  cout<<equilibriumIndex(arr3)<<endl;         //-1

  return 0;
}