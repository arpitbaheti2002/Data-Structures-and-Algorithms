#include<bits/stdc++.h>
using namespace std;

int main()
{
  int x=3, y=6;
  int a=3, b=4;
  unsigned int ux=1, uy=5;

  // Bitwise AND
  cout<<"x & y = "<<(x&y)<<endl;

  // Bitwise OR
  cout<<"x | y = "<<(x|y)<<endl;

  // Bitwise XOR
  cout<<"x ^ y = "<<(x^y)<<endl;

  // Left shift operator
  cout<<"a << 1 = "<<(a<<1)<<endl;  
  cout<<"a << 2 = "<<(a<<2)<<endl;  
  cout<<"a << b = "<<(a<<b)<<endl;

  // Right shift operator
  a = 123;
  cout<<"a >> 1 = "<<(a>>1)<<endl;  
  cout<<"a >> 2 = "<<(a>>2)<<endl;  
  cout<<"a >> b = "<<(a>>b)<<endl;  

  // Bitwise not
  cout<<"~ux = "<<(~ux)<<endl;
  cout<<"~uy = "<<(~uy)<<endl;
  cout<<"~x = "<<(~x)<<endl;
  cout<<"~y = "<<(~y)<<endl;

  return 0;
}