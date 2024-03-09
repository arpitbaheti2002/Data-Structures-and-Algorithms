#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &arr) {
  for(int i=0; i<arr.size(); i++)
    cout<<arr[i]<<", ";
  cout<<endl;
}

// Remove duplicates from an array
void remove_duplicates(vector<int> &arr) {
  int newSz=1;
  int n=arr.size();

  for(int i=1; i<n; i++) {
    if(arr[i]!=arr[newSz-1]) {
      arr[newSz] = arr[i];
      newSz++;
    }
  }
  arr.resize(newSz);
}
// Time Complexity : 	Θ(n)

int main() {
  vector<int> arr1({10,20,20,30,30,30,30});
  remove_duplicates(arr1);
  display(arr1);


  return 0;
}