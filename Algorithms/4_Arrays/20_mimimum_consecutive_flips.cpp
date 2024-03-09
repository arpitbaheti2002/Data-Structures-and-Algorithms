#include<bits/stdc++.h>
using namespace std;

// Problem Statement:
// Find the minimum number of group flips required to convert a given binary array 
// into an array that either contains all 1s or all 0s. A group flip is defined as 
// flipping a continuous sequence of elements in the array.

// Solution:
// The solution is based on two observations about the given problem. 
// Firstly, there are only two types of groups in the array: groups of 0s and groups of 1s. 
// Secondly, either the counts of both group types are the same or the difference between 
// their counts is at most 1.

// Based on these  observations, we can conclude that flipping the second group and other 
// groups of the same type as the second group will always lead to the correct answer.

void minGroupFlips(vector<int> &arr) {
  int n=arr.size();
  int first_group = arr[0];

  for(int i=1; i<n; i++) {
    if(arr[i]!=arr[i-1]) {
      if(arr[i] != arr[0]) {
        cout<<"From "<<i;
      }

      else {
        cout<<" To "<<i-1<<endl;
      }
    }
  }

  if(arr[n-1]!=arr[0])
    cout<<" To "<<n-1<<endl;
}

int main(){
  cout<<"arr1 : "<<endl;
  vector<int> arr1({1,1,0,0,0,1});
  minGroupFlips(arr1);
  cout<<endl;

  cout<<"arr2 : "<<endl;
  vector<int> arr2({1,0,0,0,1,0,0,1,1,1,1});
  minGroupFlips(arr2);
  cout<<endl;

  cout<<"arr3 : "<<endl;
  vector<int> arr3({1,1,1});
  minGroupFlips(arr3);
  cout<<endl;

  cout<<"arr4 : "<<endl;
  vector<int> arr4({0, 1});
  minGroupFlips(arr4);
  cout<<endl;

  return 0;
}