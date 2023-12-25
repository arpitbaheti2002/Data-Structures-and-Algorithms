#include<bits/stdc++.h>
using namespace std;

// string = 'ab'

//  n  |   binary rep   |  string
// -------------------------------
//  0  |      00        |  ''  
//  1  |      01        |  'a'  
//  2  |      10        |  'b'  
//  3  |      11        |  'ab'  
// -------------------------------

void powerSet(string s)
{
  int n = s.size();
  int set_size = pow(2, n);

  for(int i=0; i<set_size; i++)
  {
    cout<<"'";
    for(int j=0; j<n; j++)
    {
      if((i&(1<<j)) != 0)
        cout<<s[j];
    }
    cout<<"'"<<endl;
  }
}
// Time complexity = Θ(n*2^n)

int main()
{
  powerSet("ab");
  cout<<endl;
  powerSet("abc");
  cout<<endl;
  powerSet("abcd");
  cout<<endl;
  return 0;
}