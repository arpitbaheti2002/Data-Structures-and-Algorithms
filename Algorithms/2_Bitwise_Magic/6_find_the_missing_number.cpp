// Problem statement:
// Given an array of n number that has values in range
// [1, n+1]. Every no. appears exactly once.
// Hence one no. is missing. Find the missing no.

#include<bits/stdc++.h>
using namespace std;

int findMissingNumber(vector<int>& nums)
{
  int temp=0;
  for(int i=1; i<=nums.size()+1; i++)
    temp ^= i;

  for(int i=0; i<nums.size(); i++)
    temp ^= nums[i];

  return temp;
}

// Time Complexity: Θ(n)

int main()
{
  vector<int> vec1({1,4,3});
  cout<<findMissingNumber(vec1)<<endl;

  vector<int> vec2({1,5,3,2});
  cout<<findMissingNumber(vec2)<<endl;

  return 0;
}