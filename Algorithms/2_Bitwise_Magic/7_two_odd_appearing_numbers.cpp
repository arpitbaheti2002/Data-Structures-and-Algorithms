#include<bits/stdc++.h>
using namespace std;

vector<int> findTwoOddAppearingNumbers(vector<int>& nums)
{
  vector<int> res(2, 0);
  int temp=0;

  for(auto x: nums)
    temp = temp^x;

  // find the last set bit
  int last_set_bit = temp&(temp-1);

  for(auto x: nums)
  {
    // all numbers which does not have the last bit set is accumulated in one group
    if((x&last_set_bit)==0)
      res[0] = res[0]^x;

    // rest of the elements is accumulated in another group
    else
      res[1] = res[1]^x;
  }

  return res;
}
// Time complexity = Θ(n)

int main()
{
  vector<int> nums({3,4,3,4,5,4,4,6,7,7});
  vector<int> res = findTwoOddAppearingNumbers(nums);

  cout<<res[0]<<", "<<res[1]<<endl;

  return 0;
}