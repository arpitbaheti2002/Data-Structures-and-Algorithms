#include<iostream>
using namespace std;

// Naive Method:
int pow1(int m, int n)
{
  if(n==0)
    return 1;
  return m*pow1(m, n-1);
}

// Efficient method 1:
int pow2(int m, int n)
{
  if(n==0)
    return 1;

  else if(n%2 == 0)
    return pow2(m*m, n/2);
  
  else
    return m*pow2(m*m, (n-1)/2);
}

// Efficient method 2:
int pow3(int m, int n)
{
  if(n==0)
    return 1;
  
  int temp = pow3(m, n/2);
  int pow = temp * temp;

  if(n%2==0)
    return pow;
  else
    return pow*m;
}

int main()
{
  cout<<"2^4 = "<<pow1(2, 4)<<endl;
  cout<<"3^4 = "<<pow2(3, 4)<<endl;
  cout<<"3^5 = "<<pow3(3, 5)<<endl;
  return 0;
}