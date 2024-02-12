// Given an array of n elements that contains elements from 0 to n-1, with any of these 
// numbers appearing any number of times. Find these repeating numbers in O(n)

#include<bits/stdc++.h>
using namespace std;

void print_duplicates(int* arr, int n) {
  unordered_map<int, int> um;

  for(int i=0; i<n; i++) {
    um[arr[i]]++;
  }

  for(auto n: um) {
    if(n.second > 1) {
      cout<<n.first<<" appears "<<n.second<<" times."<<endl;
    }
  }
}

int main() {
  int arr[] = {3,6,8,8,10,12,15,15,15,20};
  print_duplicates(arr, 10);
  return 0;
}