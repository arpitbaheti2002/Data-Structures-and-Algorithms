#include<iostream>
using namespace std;

int fact(int n)
{
  if(n==0)
    return 1;
  
  return n*fact(n-1);
}

// Better Approach: Iterative method to eliminate function call overhead

int main()
{
  int n;
  cout<<"Enter n: ";
  cin>>n;

  cout<<"Factorial: "<<fact(n)<<endl;
  return 0;
}