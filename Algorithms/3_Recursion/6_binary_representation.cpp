#include<bits/stdc++.h>
using namespace std;

void printBinary(int n) {
  if(n==1 || n==0){
    cout<<n;
    return;
  }
  
  printBinary(n/2);
  cout<<n%2;
}

int main() {
  printBinary(0);
  cout<<endl;
  printBinary(1);
  cout<<endl;
  printBinary(6);
  cout<<endl;
  printBinary(7);
  cout<<endl;
  printBinary(19);
  cout<<endl;
  return 0;
}