#include<bits/stdc++.h>
using namespace std;

// Given an array arr[] of size N. The task is to find the sum of the contiguous subarray 
// within a arr[] with the largest sum. 


// Kadane Algorithm:
// We mainatain two variables currSum and maxSum. maxSum keeps track of maximum sum seen so far
// and currSum  maintains the sum of present sub array.
// In currSum we maintain if our sum is increasing after including the next element 
// or we are better if we jsut take the next element and discard the rest of the array

int maxSubarraySum(vector<int> &arr) {
  int maxSum=INT_MIN, currSum=0, n=arr.size();

  for(int i=0; i<n; i++) {
    currSum = max(currSum+arr[i], arr[i]);
    maxSum = max(maxSum, currSum);
  }

  return maxSum;
}

int main(){
  vector<int> arr1({2,3,-8,7,-1,2,3});
  cout<<maxSubarraySum(arr1)<<endl;

  vector<int> arr2({5,8,3});
  cout<<maxSubarraySum(arr2)<<endl;

  vector<int> arr3({-6,-1,-8});
  cout<<maxSubarraySum(arr3)<<endl;
  return 0;
}