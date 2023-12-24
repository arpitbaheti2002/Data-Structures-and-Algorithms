#include<bits/stdc++.h>
using namespace std;

bool checkKthBit(int n, int k)
{
  int temp = 1;
  temp = temp<<(k-1);

  return (n&temp);
}

int main()
{
  cout<<checkKthBit(5, 1)<<endl;
  cout<<checkKthBit(8, 2)<<endl;
  cout<<checkKthBit(0, 3)<<endl;
  return 0;
}