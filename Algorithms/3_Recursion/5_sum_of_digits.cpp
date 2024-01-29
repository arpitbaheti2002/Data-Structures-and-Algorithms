#include<bits/stdc++.h>
using namespace std;

int getSumDigits(int n) {
  if(n==0)
    return 0;
  
  return n%10 + getSumDigits(n/10);
}

int main() {
  cout<<getSumDigits(253)<<endl;
  cout<<getSumDigits(9987)<<endl;
  cout<<getSumDigits(10)<<endl;

  return 0;
}