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
    return n*temp*temp;
}

int main()
{
  cout<<myPow(2, 5)<<endl;
  cout<<myPow(2, 9)<<endl;
  cout<<myPow(3, 4)<<endl;
  cout<<myPow(3, 0)<<endl;
  return 0;
}