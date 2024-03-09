#include<bits/stdc++.h>
using namespace std;

// Given a 0-indexed integer array nums of size n, find the maximum difference 
// between nums[i] and nums[j] (i.e., nums[j] - nums[i]), such that 
// 0 <= i < j < n and nums[i] < nums[j].
// Return the maximum difference. If no such i and j exists, return -1.

int maximumDifference(vector<int>& nums) {
    // we keep track of the minimum element seen so far
    // and find the difference of every element with that minimum element
    // to find the maximum difference

    int res=0, curr_min=nums[0];
    int n=nums.size();

    for(int i=1; i<n; i++) {
        res = max(res, nums[i]-curr_min);
        curr_min = min(curr_min, nums[i]);
    }

    if(res==0) return -1; 

    return res;
}

// Time Complexity : 	Θ(n)

int main() {

  vector<int> arr1({2,3,10,6,4,8,1});
  cout<<maximumDifference(arr1)<<endl;

  vector<int> arr2({7,9,5,6,3,2});
  cout<<maximumDifference(arr2)<<endl;

  vector<int> arr3({10,20,30});
  cout<<maximumDifference(arr3)<<endl;

  vector<int> arr4({30,10,8,2});
  cout<<maximumDifference(arr4)<<endl;

  return 0;
}