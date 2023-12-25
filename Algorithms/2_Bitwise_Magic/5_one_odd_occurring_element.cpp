#include<bits/stdc++.h>
using namespace std;

// Properties of xor:
// 0^x = x
// x^x = 0
// so, even occurring elements will cancel out each other

int oddOccurringElement(vector<int> nums)
{
  int temp = 0;
  for(auto x: nums)
  {
    temp ^= x;
  }

  return temp;
}

// Time Complexity: Θ(n)

int main()
{
  cout<<oddOccurringElement({4,3,4,4,4,5,5})<<endl;
  cout<<oddOccurringElement({8,7,7,8,8})<<endl;

  return 0;
}