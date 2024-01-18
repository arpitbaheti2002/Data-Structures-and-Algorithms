#include<bits/stdc++.h>
using namespace std;

vector<int> f(20, 0);

int fib(int n)
{
  if(n==0 || n==1)
    return n;
  
  if(f[n]!=0)
    return f[n];
  
  return f[n] = fib(n-1) + fib(n-2);
}

int main()
{
  cout<<fib(1)<<endl;
  cout<<fib(2)<<endl;
  cout<<fib(3)<<endl;
  cout<<fib(4)<<endl;
  cout<<fib(5)<<endl;
  cout<<fib(6)<<endl;
  cout<<fib(7)<<endl;
  cout<<fib(8)<<endl;
  cout<<fib(9)<<endl;
  cout<<fib(10)<<endl;
  return 0;
}