#include<bits/stdc++.h>
using namespace std;

int countSetBits1(int n)
{
  int res=0;
  while(n>0)
  {
    res = res+(n&1);
    n = n>>1;
  }

  return res;
}
// Time Complexity: Θ(number of bits)

// More efficient: brian kernighan method
int countSetBits2(int n)
{
  int res=0;
  while(n>0)
  {
    res++;
    n = (n&(n-1));
  }

  return res;
}
// Time Complexity: Θ(number of set bits)

// Most efficient: Lookup table method
void compute_lookup(vector<int>& lookup)
{
  for(int i=1; i<256; i++)
  {
    lookup[i] = lookup[i/2]+(i&1);
  }
}

int countSetBits3(int n)
{
  vector<int> lookup_table(256, 0);
  compute_lookup(lookup_table);

  int res=0;
  while(n>0)
  {
    int temp = (n&255);
    res += lookup_table[temp];

    n = n>>8;
  }

  return res;
}
// Time Complexity: Θ(number of bits / 8)

int main()
{
  cout<<countSetBits1(5)<<endl;
  cout<<countSetBits1(7)<<endl;
  cout<<countSetBits1(13)<<endl;
  cout<<endl;

  cout<<countSetBits2(5)<<endl;
  cout<<countSetBits2(7)<<endl;
  cout<<countSetBits2(13)<<endl;
  cout<<endl;

  cout<<countSetBits3(5)<<endl;
  cout<<countSetBits3(7)<<endl;
  cout<<countSetBits3(13)<<endl;
  cout<<endl;

  return 0;
}