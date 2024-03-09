#include<bits/stdc++.h>
using namespace std;

// Given a sorted array, arr[] consisting of N integers, 
// the task is to find the frequencies of each array element.

void printFrequency(vector<int>& nums) {
  int count=1, n=nums.size();
  for(int i=1; i<n; i++) {
    if(nums[i]==nums[i-1]) {
      count++;
    }
    else {
      cout<<nums[i-1]<<" : "<<count<<endl;
      count=1;
    }
  }
  cout<<nums[n-1]<<" : "<<count<<endl;
}

// Time Complexity : 	Θ(n)

int main() {

  vector<int> arr1({10,10,10,25,30,30});
  printFrequency(arr1);

  vector<int> arr2({10,10,10,10});
  printFrequency(arr2);

  vector<int> arr3({10,10,10,20});
  printFrequency(arr3);

  return 0;
}