#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices) {
  int res=0, n=prices.size();

  for(int i=1; i<n; i++) {
    if(prices[i]>prices[i-1]) {
      res += prices[i]-prices[i-1];
    }
  }

  return res;
}

int main(){
  vector<int> arr1({1,5,3,8,12});
  cout<<maxProfit(arr1)<<endl;
  vector<int> arr2({1,5,3,1,2,8});
  cout<<maxProfit(arr2)<<endl;
  return 0;
}