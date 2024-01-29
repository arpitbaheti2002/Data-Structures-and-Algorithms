#include<bits/stdc++.h>
using namespace std;

// Given an array, return the number if subsets which has sum equal to k

int countSubsetSum(vector<int> &arr, int sum, int i) {
  if(i==arr.size()) {
    if(sum==0)
      return 1;
    else
      return 0;
  }

  int res=0;
  res += countSubsetSum(arr, sum, i+1);
  res += countSubsetSum(arr, sum-arr[i], i+1);
  
  return res;
}


int main() {
  vector<int> a({10, 5, 2, 3, 6});
  cout<<countSubsetSum(a, 8, 0)<<endl;
  vector<int> b({1, 2, 3});
  cout<<countSubsetSum(b, 4, 0)<<endl;
  vector<int> c({10, 20, 15});
  cout<<countSubsetSum(c, 37, 0)<<endl;
  cout<<countSubsetSum(c, 0, 0)<<endl;

  return 0;
}