#include<bits/stdc++.h>
using namespace std;

// Given an array of integers and a number k, find the maximum 
// sum of k consecutive elements.

int maxSumK(vector<int> &arr, int k) {
  int maxSum=INT_MIN, currSum=0;
  int n=arr.size();

  // calculating sum of first k elements
  for(int i=0; i<k; i++) {
    currSum += arr[i];
  }
  maxSum = currSum;

  // sliding the window forwards
  for(int i=k; i<n; i++) {
    currSum = currSum + arr[i] - arr[i-k];
    maxSum = max(maxSum, currSum);
  }

  return maxSum;
}

int main(){
  vector<int> arr1({1,8,30,-5,20,7});
  cout<<maxSumK(arr1, 3)<<endl;         // 45

  vector<int> arr2({5,-10,6,90,3});
  cout<<maxSumK(arr2, 2)<<endl;         // 96

  return 0;
}