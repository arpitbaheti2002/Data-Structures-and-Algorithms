#include<iostream>
using namespace std;

// method 1 : Recursive
int fib1(int n)
{
  if(n<=1)
    return n;
  else
    return fib1(n-2)+fib1(n-1);
}

// method 2 : Iterative
int fib2(int n)
{
  
}

int main()
{
  int n;
  cout<<"Enter number of terms: ";
  cin>>n;

  for(int i=0; i<n; i++)
    cout<<fib1(i)<<", ";
  cout<<endl;
  

  return 0;
}