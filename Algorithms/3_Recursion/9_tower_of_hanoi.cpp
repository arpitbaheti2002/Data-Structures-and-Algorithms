#include<bits/stdc++.h>
using namespace std;

void TOH(int n, char A, char B, char C) {
  if(n==0)
    return;

  TOH(n-1, A, C, B);
  cout<<"move disk "<<n<<" from "<<A<<" to "<<C<<endl;
  TOH(n-1, B, A, C);

}

int main() {
  TOH(3, 'A', 'B', 'C');
  cout<<endl;
  TOH(4, 'A', 'B', 'C');


  return 0;
}