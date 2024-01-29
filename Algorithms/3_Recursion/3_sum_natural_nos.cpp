#include<bits/stdc++.h>
using namespace std;

int getSum(int n) {
  if(n==0)
    return 0;
  
  return n + getSum(n-1);
}

int main() {
  cout<<getSum(5)<<endl;
  cout<<getSum(10)<<endl;
  cout<<getSum(100)<<endl;

  return 0;
}