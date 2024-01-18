#include<bits/stdc++.h>
using namespace std;

void print_1_to_n(int n)
{
  if(n==0)
    return;
  
  print_1_to_n(n-1);
  cout<<n<<" ";
}

// Time complexity: Θ(n)
// Space complexity: Θ(n)

int main()
{
  print_1_to_n(5);
  cout<<endl;

  return 0;
}