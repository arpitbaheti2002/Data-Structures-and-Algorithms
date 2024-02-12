// Given an array arr[] of non-negative integers and an integer sum, find a subarray that adds to a given sum.

#include<bits/stdc++.h>
using namespace std;

void subarraySumUnsorted(int* arr, int n, int sum) {
  unordered_map<int, int> um;
  int currSum = 0; 

  for(int i=0; i<n; i++) {
    currSum += arr[i];

    if(currSum == sum) {
      cout<<"Subarray from "<<0<<", "<<i<<endl;
    }

    if(um.find(currSum-sum) != um.end()) {
      cout<<"Subarray from "<<um[currSum-sum]<<", "<<i<<endl;
    }

    um[currSum] = i+1;
  }
}


void subarraySumSorted(int* arr, int n, int sum) {
  int left=0, right=0;
  int currSum = 0;

  while(right<n) {
    currSum += arr[right];

    while (currSum > sum)
    {
      currSum -= arr[left];
      left++;
    }

    if(currSum==sum)
      cout<<"Subarray from "<<left<<", "<<right<<endl;

    right++;    
  }
}

int main() {
  int arr1[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
  subarraySumUnsorted(arr1, 8, 23);

  cout<<endl;

  int arr2[] = { 1, 4, 6, 8, 12, 14, 16 };
  subarraySumSorted(arr2, 7, 20);

  return 0;
}