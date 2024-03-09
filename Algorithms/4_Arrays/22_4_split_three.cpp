#include<bits/stdc++.h>
using namespace std;

// Consider an array A of n integers. Determine if array A can be split into 
// three consecutive parts such that sum of each part is equal.

vector<int> findSplit(vector<int> &arr) {
  int n=arr.size();
  int preSum=0, sum=0;
  int ind1=-1, ind2=-1;

  // Calculate the sum of the array
  for(int i=0; i<n; i++) {
    sum += arr[i];
  }

  // If sum is not divisible by 3 then array cannot be divided
  if(sum%3 != 0) {
    return {-1};
  }

  int s1=sum/3, s2=2*s1;    // varibales tp store s/3 and 2*(s/3)

  for(int i=0; i<n; i++) {
    preSum += arr[i];

    if(preSum == s1 && ind1 == -1) {
      ind1 = i;
    }

    if(preSum == s2 && ind1 != -1) {
      ind2 = i;
    }
  }

  if(ind1!=-1 && ind2!=-1) {
    return {ind1, ind2};
  }

  return {-1};
}

// Time Complexity: Θ(n)

int main(){
  vector<int> arr1({5,2,6,1,1,1,5});
  vector<int> res1 = findSplit(arr1);

  for(int i=0; i<res1.size(); i++) {
    cout<<res1[i]<<", ";                        // 1, 3
  }
  cout<<endl;

  vector<int> arr2({5,3,6,1,1,1,5});
  vector<int> res2 = findSplit(arr2);

  for(int i=0; i<res2.size(); i++) {
    cout<<res2[i]<<", ";                        // -1
  }
  cout<<endl;

  return 0;
}
