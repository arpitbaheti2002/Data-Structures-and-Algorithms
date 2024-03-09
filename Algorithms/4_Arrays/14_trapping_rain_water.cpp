#include<bits/stdc++.h>
using namespace std;

int getWater(vector<int> &arr) {
  int res=0, n=arr.size();

  vector<int> leftMax(n);
  vector<int> rightMax(n);
  int lMax = arr[0];
  int rMax = arr[n-1];

  for(int i=1; i<n; i++) {
    lMax = max(lMax, arr[i]);
    leftMax[i] = lMax;
  }

  for(int i=n-2; i>=1; i--) {
    rMax = max(rMax, arr[i]);
    rightMax[i] = rMax;
  }

  for(int i=1; i<n-1; i++) {
    res += min(leftMax[i], rightMax[i])-arr[i];
  }

  return res;
}

int main(){
  vector<int> arr1({2,0,2});
  cout<<getWater(arr1)<<endl;

  vector<int> arr2({3,0,1,2,5});
  cout<<getWater(arr2)<<endl;
  return 0;
}