#include<iostream>
using namespace std;

int sum_natural_numbers(int n)
{
  if(n==0)
    return 0;
  return n + sum_natural_numbers(n-1);
}

// Better approaches:
// 1. Iterative method - O(n)
// 2. Formula = n(n+1)/2 - O(1)

int main()
{
  int n;
  cout<<"Enter n: ";
  cin>>n;
  cout<<"sum= "<<sum_natural_numbers(n)<<endl;
  return 0;
}