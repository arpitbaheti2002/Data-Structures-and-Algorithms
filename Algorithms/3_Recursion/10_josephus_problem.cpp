#include<bits/stdc++.h>
using namespace std;

// In josephus problem, n people are standing in a circle and every kth person is killed
// we need to return the last surviving person

// This is 0 indexed Josephus
int josephus(int n, int k) {
  if(n==1) return 0;

  return (josephus(n-1, k) + k) % n;
}


// For 1 indexed josephus return (1 + result of 0 indexed josephus)

int main() {
  cout<<josephus(7, 3)<<endl;
  cout<<josephus(8, 2)<<endl;

  return 0;
}