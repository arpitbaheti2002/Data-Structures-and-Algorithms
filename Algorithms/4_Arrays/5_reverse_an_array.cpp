#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &arr) {
  for(int i=0; i<arr.size(); i++)
    cout<<arr[i]<<", ";
  cout<<endl;
}

// Reverse an array
void reverse(vector<int> &arr) {
  int i=0, j=arr.size()-1;

  while(i<j) {
    swap(arr[i], arr[j]);
    i++;
    j--;
  }
}
// Time Complexity : 	Θ(n)

int main() {
  vector<int> arr1({10,5,7,30});
  reverse(arr1);
  display(arr1);


  return 0;
}