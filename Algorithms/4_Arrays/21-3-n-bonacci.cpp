#include<bits/stdc++.h>
using namespace std;

// You are given two integers N and M, and print all the terms of the series up to M-terms of the N-bonacci Numbers.
void nbonacci(int n, int m) {
  vector<int> arr(m);
  int currSum=0;

  for(int i=0; i<n-1; i++) {
    cout<<0<<", ";
  }

  arr[n-1] = 1;
  cout<<arr[n-1]<<", ";
  currSum = 1;

  for(int i=n; i<m; i++) {
    arr[i] = currSum;
    currSum += arr[i]-arr[i-n];
    cout<<arr[i]<<", ";
  } 
  cout<<endl;
}

int main(){
  nbonacci(3, 8);
  cout<<endl;
  
  nbonacci(4, 10);
  cout<<endl;

  return 0;
}