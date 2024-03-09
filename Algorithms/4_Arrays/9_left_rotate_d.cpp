#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &arr) {
  for(int i=0; i<arr.size(); i++)
    cout<<arr[i]<<", ";
  cout<<endl;
}

// Left rotate array by D places
// algorithm:-
// 1. reverse first d elements
// 2. reverse all other elements
// 3. reverse the complete array

void reverse(vector<int> &arr, int low, int high) {
  while(low<high) {
    swap(arr[low++], arr[high--]);
  }
}

void left_rotate_d(vector<int> &arr, int d) {
  int n=arr.size();

  reverse(arr, 0, d-1);
  reverse(arr, d, n-1);
  reverse(arr, 0, n-1);
}

// Time Complexity : 	Θ(n)

int main() {
  vector<int> arr1({1,2,3,4,5});
  left_rotate_d(arr1, 2);
  display(arr1);

  vector<int> arr2({10,5,30,15});
  left_rotate_d(arr2, 3);
  display(arr2);

  return 0;
}