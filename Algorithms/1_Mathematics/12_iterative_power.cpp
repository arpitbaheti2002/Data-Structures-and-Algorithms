#include<bits/stdc++.h>
using namespace std;

// 3^19 = 3^16 * 3^2 * 3^1    // (19 = 10011)

long long myPow(int n, int m)
{
  long long res=1, x=m, num=n;
  while(x>0)
  {
    if((x&1) > 0)
      res *= num;

    num = num*num; 
    x = x>>1;
  }

  return res;
}

// Time Complexity: Θ(log n)
// Auxiliary Space: Θ(1)

int main()
{
  cout<<"pow(2, 3) = "<<myPow(2, 3)<<endl;
  cout<<"pow(3, 4) = "<<myPow(3, 4)<<endl;
  cout<<"pow(5, 0) = "<<myPow(5, 0)<<endl;
  cout<<"pow(5, 1) = "<<myPow(5, 1)<<endl;
  cout<<"pow(4, 5) = "<<myPow(4, 5)<<endl;
  return 0;
}