#include<bits/stdc++.h>
using namespace std;

// Return the index of the second largest element in the array
int getSecondLargest(vector<int> arr) {
  int largest=-1, sLargest=-1;

  for(int i=0; i<arr.size(); i++) {
    if(largest==-1 || arr[i]>arr[largest]) {
      sLargest = largest;
      largest = i;
    }

    else if(sLargest==-1 || arr[i]>arr[sLargest]) {
      if(arr[i]!=arr[largest]) {
        sLargest = i;
      }
    }
  }

  return sLargest;
}

// Time Complexity : 	Θ(n)

int main() {
  vector<int> arr1({10,5,8,20});
  cout<<getSecondLargest(arr1)<<endl;

  vector<int> arr2({20,10,20,8,12});
  cout<<getSecondLargest(arr2)<<endl;

  vector<int> arr3({10,10,10});
  cout<<getSecondLargest(arr3)<<endl;

  return 0;
}