#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &arr) {
  for(int i=0; i<arr.size(); i++)
    cout<<arr[i]<<", ";
  cout<<endl;
}

// Move all the zeros to the end of the array
void move_zeros_end(vector<int> &arr) {
  int idx=0, count=0;
  int n=arr.size();

  for(int i=0; i<n; i++) {
    if(arr[i]==0)
      count++;
    else {
      arr[idx] = arr[i];
      idx++;
    }
  }

  while(count>0) {
    arr[idx++] = 0;
    count--;
  }
}

// Time Complexity : 	Θ(n)

int main() {
  vector<int> arr1({8,5,0,10,0,20});
  move_zeros_end(arr1);
  display(arr1);


  return 0;
}