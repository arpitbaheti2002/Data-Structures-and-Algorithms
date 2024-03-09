#include<bits/stdc++.h>
using namespace std;

// Given an array a[] of N integers, the task is to find the length of the longest 
// Alternating Even Odd subarray present in the array. 

int longestEvenOddSubarray(vector<int> arr) {
  int res=1, curr=1, n=arr.size();

  for(int i=1; i<n; i++) {
    if((arr[i-1]%2==0 && arr[i]%2!=0) || (arr[i-1]%2!=0 && arr[i]%2==0)) {
      curr++;
    }
  }

  res = max(res, curr);

  return res;
}

int main(){
  vector<int> arr1({10,12,14,7,8});
  cout<<longestEvenOddSubarray(arr1)<<endl;
  vector<int> arr2({7,10,13,14});
  cout<<longestEvenOddSubarray(arr2)<<endl;
  vector<int> arr3({10,12,8,4});
  cout<<longestEvenOddSubarray(arr3)<<endl;
  return 0;
}