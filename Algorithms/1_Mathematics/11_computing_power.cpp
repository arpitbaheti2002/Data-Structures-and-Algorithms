#include<bits/stdc++.h>
using namespace std;

int myPow(int n, int m)
{
  if(m==0)
    return 1;
  
  int temp = myPow(n, m/2);

  if(m%2==0)
    return temp*temp;
  else
    return temp*temp*n;
}

// Time Complexity: Θ(log n)
// Auxiliary Space: Θ(log n)

int main()
{
  cout<<"pow(2, 3) = "<<myPow(2, 3)<<endl;
  cout<<"pow(3, 4) = "<<myPow(3, 4)<<endl;
  cout<<"pow(5, 0) = "<<myPow(5, 0)<<endl;
  cout<<"pow(5, 1) = "<<myPow(5, 1)<<endl;
  return 0;
}