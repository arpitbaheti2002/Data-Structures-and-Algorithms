#include<bits/stdc++.h>
using namespace std;

int fun(int n)
{
  static int x=0;

  if(n>0)
  {
    x++;
    return x+fun(n-1);
  }

  return 0;
}

// variable x is shared among all the function calls
// first it is incremented from 0 to n
// and on return it returns x+fun(n)

int main()
{
  cout<<fun(5)<<endl;
  cout<<fun(7)<<endl;

  return 0;
}