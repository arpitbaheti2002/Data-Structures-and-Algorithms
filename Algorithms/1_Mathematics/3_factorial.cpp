#include<bits/stdc++.h>
using namespace std;

// Recursive approach: 
int rfact(int n)
{
  if(n==0)
    return 1;

  return n*rfact(n-1);
}

// Time Complexity: Θ(n)
// Auxiliary space: Θ(n)


// Iterative approach: 
int fact(int n)
{
  int res=1;
  for(int i=2; i<=n; i++)
    res *= i;
  
  return res;
}

// Time Complexity: Θ(n)
// Auxiliary space: Θ(1)

int main()
{
  cout<<rfact(4)<<endl;
  cout<<rfact(6)<<endl;
  cout<<rfact(0)<<endl;

  cout<<fact(4)<<endl;
  cout<<fact(6)<<endl;
  cout<<fact(0)<<endl;

  return 0;
}