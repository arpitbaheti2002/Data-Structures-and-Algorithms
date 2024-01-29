#include<bits/stdc++.h>
using namespace std;

void print_1_to_n(int n) {
  if(n==0)
    return;
  
  print_1_to_n(n-1);
  cout<<n<<endl;
}

int main() {
  print_1_to_n(10);

  return 0;
}