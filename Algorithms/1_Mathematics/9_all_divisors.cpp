#include<bits/stdc++.h>
using namespace std;

vector<int> getDivisors(int n)
{
  vector<int> res;

  for(int i=1; i*i<=n; i++)
  {
    if(n%i==0)
    {
      res.push_back(i);

      if(n/i != i)
        res.push_back(n/i);
    }
  }

  return res;
}

// Time complexity: Θ(sq. root(n))
// Space complexity: Θ(1)

void printAllDivisors(int n)
{
  vector<int> res;
  res = getDivisors(n);
  sort(res.begin(), res.end());

  for(auto d: res)
    cout<<d<<" ";
  cout<<endl;
}


int main()
{
  printAllDivisors(15);

  printAllDivisors(100);

  printAllDivisors(7);

  return 0;
}