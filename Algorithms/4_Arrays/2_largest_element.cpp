#include<bits/stdc++.h>
using namespace std;

int getLargest(vector<int> arr) {
  int res = INT_MIN;

  for(int i=0; i<arr.size(); i++) {
    res = max(res, arr[i]);
  }

  return res;
}

// Time Complexity : 	Θ(n)

int main() {
  vector<int> arr1({10,5,20,8});
  cout<<getLargest(arr1)<<endl;

  vector<int> arr2({40,8,50,100});
  cout<<getLargest(arr2)<<endl;

  return 0;
}