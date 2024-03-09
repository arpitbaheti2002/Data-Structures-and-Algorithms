#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int> &arr) {
  int res=0, count=0, n=arr.size();

  for(int i=0; i<n; i++) {
    if(arr[i]==1) {
      count++;
    }
    else {
      res = max(res, count);
      count = 0;
    }
  }
  res = max(res, count);

  return res;
}

int main(){
  vector<int> arr1({0,1,1,0,1,0});
  cout<<maxConsecutiveOnes(arr1)<<endl;

  vector<int> arr2({1,1,1,1});
  cout<<maxConsecutiveOnes(arr2)<<endl;
  return 0;
}