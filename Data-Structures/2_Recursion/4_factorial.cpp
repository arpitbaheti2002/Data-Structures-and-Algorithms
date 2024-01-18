#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
  if(n==0)
    return 1;
  
  return fact(n-1)*n;
}

int main()
{
  cout<<fact(3)<<endl;
  cout<<fact(4)<<endl;
  cout<<fact(5)<<endl;
  cout<<fact(6)<<endl;
  cout<<fact(7)<<endl;
  return 0;
}