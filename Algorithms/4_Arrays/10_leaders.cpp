#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &arr) {
  for(int i=0; i<arr.size(); i++)
    cout<<arr[i]<<", ";
  cout<<endl;
}

// Leaders in an array : An element is a leader if it is greater than all the 
// elements to its right side. And the rightmost element is always a leader. 
// algorithm:-
// Strat traversing from right side and keep track of maximum element seen so far

vector<int> getLeaders(vector<int> &arr) {
  int n=arr.size();
  vector<int> res;
  int curr_ldr = arr[n-1];
  res.push_back(arr[n-1]);

  for(int i=n-2; i>=0; i--) {
    if(arr[i]>curr_ldr) {
      res.push_back(arr[i]);
      curr_ldr = arr[i];
    }
  }

  return res;
}


// Time Complexity : 	Θ(n)

int main() {
  vector<int> res;

  vector<int> arr1({7,10,4,3,6,5,2});
  res = getLeaders(arr1);
  display(res);

  vector<int> arr2({10,20,30});
  res = getLeaders(arr2);
  display(res);

  return 0;
}