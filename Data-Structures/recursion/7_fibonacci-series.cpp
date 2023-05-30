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
  int t0=0, t1=1;
  if(n<2)
    return n;
  
  for(int i=2; i<=n; i++)
  {
    int temp = t0+t1;
    t0 = t1;
    t1 = temp;
  }
  return t1;
}

// method 3 : using memoization
int F[20];

int fib3(int n)
{
    if(n<2)
    {
      F[n] = n;
      return n;
    }
    else
    {
      if(F[n-1] == -1)
        F[n-1] = fib3(n-1);
      if(F[n-2] == -1)
        F[n-2] = fib3(n-2);
      
      F[n] = F[n-1] + F[n-2];
      return F[n];
    }
}

int main()
{
  int n;
  cout<<"Enter number of terms: ";
  cin>>n;

  for(int i=0; i<n; i++)
    cout<<fib1(i)<<", ";
  cout<<endl;
  
  for(int i=0; i<n; i++)
    cout<<fib2(i)<<", ";
  cout<<endl;

  // creating a array with all elements -1
  for(int i=0; i<20; i++)
  {
    F[i]=-1;
  }

  cout<<fib3(8)<<endl;

  return 0;
}