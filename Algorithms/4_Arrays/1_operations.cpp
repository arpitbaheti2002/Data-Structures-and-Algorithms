#include<bits/stdc++.h>
using namespace std;

// Display
void display(int *arr, int n) {
  for(int i=0; i<n; i++)
    cout<<arr[i]<<", ";
  cout<<endl;
}

// Search
bool search(int *arr, int n, int x) {
  for(int i=0; i<n; i++) {
    if(arr[i]==x)
      return true;
  }

  return false;
}

// Insert
int insert(int *arr, int n, int pos, int val) {
  for(int i=n-1; i>=pos; i--) {
    arr[i+1] = arr[i];
  }

  arr[pos] = val;
  return n+1;
}

// Deletion
int deleteEle(int *arr, int n, int ele) {
  int i=0; 
  while(i!=n && arr[i]!=ele) {
    i++;
  }

  if(i==n)      // element not found
    return n;

  for(; i<n-1; i++) {
    arr[i] = arr[i+1];
  }

  return n-1;
}


int main(){
  int arr[20] = {20, 5, 7, 25};
  int length = 4;
  
  // search
  cout<<search(arr, length, 5)<<endl;
  cout<<search(arr, length, 15)<<endl;

  // display
  display(arr, length);

  // Insert
  length = insert(arr, length, 2, 8);
  display(arr, length);
  length = insert(arr, length, 2, 3);
  display(arr, length);

  // Delete
  length = deleteEle(arr, length, 20);
  display(arr, length);
  length = deleteEle(arr, length, 3);
  display(arr, length);

  return 0;
}