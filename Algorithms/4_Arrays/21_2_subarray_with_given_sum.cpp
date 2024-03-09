#include<bits/stdc++.h>
using namespace std;

// Given an unsorted array of non-negative integers.
// Find if there is a subarray with given sum

int isSubSum(vector<int> &arr, int sum) {
  int currSum=0, start=0, end=0;
  int n=arr.size();

  while (end<n) {
    currSum += arr[end];

    while(currSum>sum && start<end) {
      currSum -= arr[start];
      start++;
    }

    if(currSum == sum) {
      return true;
    }

    end++;
  }

  return false;
}

int main(){
  vector<int> arr1({1,4,20,3,10,5});
  int sum1 = 33;
  cout<<isSubSum(arr1, sum1)<<endl;         // 1

  vector<int> arr2({1,4,0,0,3,10,5});
  int sum2 = 7;
  cout<<isSubSum(arr2, sum2)<<endl;         // 1

  vector<int> arr3({2,4});
  int sum3 = 3;
  cout<<isSubSum(arr3, sum3)<<endl;         // 0

  return 0;
}