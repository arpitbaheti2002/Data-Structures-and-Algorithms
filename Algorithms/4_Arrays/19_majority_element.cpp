#include<bits/stdc++.h>
using namespace std;

// Find the majority element in the array. A majority element in an 
// array A[] of size n is an element that appears more than n/2 times.
int majorityElement(vector<int> &arr) {
  int ele=arr[0], count=1, n=arr.size();

  // Finding the candidate solution
  for(int i=1; i<n; i++) {
    if(arr[i] == ele)
      count++;
    
    else
      count--;

    if(count==0) {
      ele = arr[i];
      count = 1;
    }
  }

  // verifying count of candidate solution
  count = 0;

  for(int i=0; i<n; i++) {
    if(arr[i] == ele) {
      count++;
    }
  }

  return (count > n/2)? ele : -1;
} 

int main() {
  vector<int> arr1({8,3,4,8,8});
  cout<<majorityElement(arr1)<<endl;    // 8

  vector<int> arr2({3,7,4,7,7,5});
  cout<<majorityElement(arr2)<<endl;    // -1

  vector<int> arr3({20,30,40,50,50,50,50});
  cout<<majorityElement(arr3)<<endl;    // 50 

  return 0;
}