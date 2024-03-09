#include<bits/stdc++.h>
using namespace std;

// Given two arrays L[] and R[] of size N where L[i] and R[i] (0 ? L[i], R[i] < 106)
// denotes a range of numbers, the task is to find the maximum occurred integer in all 
// the ranges. If more than one such integer exists, print the smallest one. 

int maxOcc(vector<int> &L, vector<int> &R) {
  vector<int> arr(1000000);
  int n=L.size();

  for(int i=0; i<n; i++) {
    arr[L[i]]++;      // We mark the beginning with 1       
    arr[R[i]+1]--;      // We mark the end with -1       
  }

  int maxm=arr[0], res=0, currCount=arr[0];

  // Using Prefix Sum technique, we count how many times an element occurs
  for(int i=1; i<1000000; i++) {
    currCount += arr[i];
    arr[i] = currCount;

    if(currCount > maxm) {
      maxm = currCount;
      res = i;
    }
  }

  return res;
}

// Time Complexity: Θ(n)

int main(){
  vector<int> L1({1,2,3});
  vector<int> R1({3,5,7});
  cout<<maxOcc(L1, R1)<<endl;         //3

  vector<int> L2({1,2,5,15});
  vector<int> R2({5,8,7,18});
  cout<<maxOcc(L2, R2)<<endl;         //5

  return 0;
}

// L[] = {1, 2, 3}
// R[] = {3, 5, 7}
// i=1: arr[] = {0,1,0,0,-1,0,0,0,0,0,0}
// i=2: arr[] = {0,1,1,0,-1,0,-1,0,0,0,0}
// i=2: arr[] = {0,1,1,1,-1,0,-1,0,-1,0,0}
// after prefix Sum = arr[] = {0,1,2,3,2,2,1,1,0,0,0}
// ans = 3