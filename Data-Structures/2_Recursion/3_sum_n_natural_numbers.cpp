#include<bits/stdc++.h>
using namespace std;

int sumNNatural(int n)
{
  if(n<=0)
    return 0;
  
  return sumNNatural(n-1)+n;
}

int main()
{
  cout<<sumNNatural(3)<<endl;
  cout<<sumNNatural(4)<<endl;
  cout<<sumNNatural(5)<<endl;
  cout<<sumNNatural(6)<<endl;
  cout<<sumNNatural(7)<<endl;
  return 0;
}