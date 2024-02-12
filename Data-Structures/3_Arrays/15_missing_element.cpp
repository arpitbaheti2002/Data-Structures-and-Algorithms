// Question 1.
// Given an array arr[] of size N-1 with integers in the range of [1, N], the task is to find the 
// missing number from the first N integers.

// Question 2.
// Given an array of n unique integers where each element in the array is in the range [1, n]. 
// The array has all distinct elements and the size of the array is (n-2). Hence Two numbers from 
// the range are missing from this array. Find the two missing numbers.

#include<bits/stdc++.h>
using namespace std;

int find_one_missing(int* arr, int n) {
  int N=n+1;
  int res=0;

  for(int i=1; i<=N; i++) {
    res ^= i;
  }

  for(int i=0; i<n; i++) {
    res ^= arr[i];
  }

  return res;
}

vector<int> find_two_missing(int* arr, int n) {
  int N=n+2;
  int tot=0;
  int xor1=0, xor2=0;

  for(int i=1; i<=N; i++) {
    tot ^= i;
  }

  for(int i=0; i<n; i++) {
    tot ^= arr[i];
  }

  int set_bit = tot & (~(tot-1));

  for(int i=0; i<n; i++) {
    if((arr[i]&set_bit)!=0)
      xor1 ^= arr[i];
    else
      xor2 ^= arr[i];
  }

  for(int i=1; i<=N; i++) {
    if((i&set_bit)!=0)
      xor1 ^= i;
    else
      xor2 ^= i;
  }

  return {xor1, xor2};
}

int main() {
  int arr1[] = { 1, 3, 7, 5, 6, 2 };
  cout<<find_one_missing(arr1, 6)<<endl;

  int arr2[] = {1, 3, 5, 6};
  vector<int> res = find_two_missing(arr2, 4);

  cout<<res[0]<<", "<<res[1]<<endl;

  return 0;
}