#include<bits/stdc++.h>
using namespace std;

// Given a fixed array and multiple queries of following types on the array, 
// how to efficiently perform those queries.

vector<int> getSubarraySum(vector<int> &arr, vector<vector<int>> &q) {
  int n=arr.size(), m=q.size(), currSum=0;
  vector<int> preSum(n);
  vector<int> res;

  // calculate the prefix sum of the array
  for(int i=0; i<n; i++) {
    currSum += arr[i];
    preSum[i] = currSum;
  }  

  // now we can calculate the sum of the subarray in Θ(1) time
  for(int i=0; i<m; i++) {
    int l=q[i][0], r=q[i][1];

    if(l == 0)
      res.push_back(preSum[r]);
    else
      res.push_back(preSum[r]-preSum[l-1]);
  }

  return res;
}

int main(){
  vector<int> arr({2,8,3,9,6,5,4});
  vector<vector<int>> queries;
  queries.push_back({0,2});
  queries.push_back({1,3});
  queries.push_back({2,6});

  vector<int> res = getSubarraySum(arr, queries);

  for(int i=0; i<res.size(); i++) {
    cout<<res[i]<<endl;
  }

  return 0;
}