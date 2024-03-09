#include<bits/stdc++.h>
using namespace std;

// Given a circular array of size n, find the maximum subarray sum of the non-empty subarray.

int kadane(vector<int> &arr) {
  int res=arr[0], curr=arr[0], n=arr.size();

  for(int i=1; i<n; i++) {
    curr = max(arr[i], curr+arr[i]);
    res = max(res, curr);
  }

  return res;
}

int circularSubarraySum (vector<int> &arr) {
  int n = arr.size();

  // Find the total sum of array
  int sum = 0;
  for(int i=0; i<n; i++) {
    sum += arr[i];
  } 

  // Find maximum subarray sum using Kadane's algorithm
  int max_subarray_sum = kadane(arr);

  // Find minimum subarray sum using Kadane's algorithm

  // To find minimum sum multiply each element of array with -1 and find its maximum sum
  vector<int> myArr = arr;

  for(int i=0; i<n; i++) {
    myArr[i] *= -1;
  }

  int min_subarray_sum = kadane(myArr);

  // return max of maximumSum or sum + minimumSum

  return max(max_subarray_sum, sum + min_subarray_sum);
}

int main(){
  vector<int> arr1({5,-2,3,4});
  cout<<circularSubarraySum(arr1)<<endl;    // 12

  vector<int> arr2({2,3,-4});
  cout<<circularSubarraySum(arr2)<<endl;    // 5

  vector<int> arr3({8,-4,3,-5,4});
  cout<<circularSubarraySum(arr3)<<endl;    // 12

  vector<int> arr4({-3,4,6,-2});
  cout<<circularSubarraySum(arr4)<<endl;    // 10
  return 0;
}