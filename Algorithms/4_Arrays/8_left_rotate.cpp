#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &arr) {
  for(int i=0; i<arr.size(); i++)
    cout<<arr[i]<<", ";
  cout<<endl;
}

// Left rotate array by 1
void left_rotate(vector<int> &arr) {
  int temp = arr[0];
  int n=arr.size();

  for(int i=0; i<n-1; i++) {
    arr[i] = arr[i+1];
  }

  arr[n-1] = temp;
}

// Time Complexity : 	Θ(n)

int main() {
  vector<int> arr1({1,2,3,4,5});
  left_rotate(arr1);
  display(arr1);


  return 0;
}