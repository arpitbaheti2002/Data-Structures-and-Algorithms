#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
  int rev=0, num=n;

  while(num>0)
  {
    rev = (rev*10) + (num%10);
    num /= 10;
  }

  return (rev == n);
}

// Time Complexity: Θ(d)    -- d is number of digits
// Auxiliary space: Θ(1)

int main()
{
  cout<<isPalindrome(78987)<<endl;
  cout<<isPalindrome(8668)<<endl;
  cout<<isPalindrome(8)<<endl;
  cout<<isPalindrome(21)<<endl;
  cout<<isPalindrome(367)<<endl;

  return 0;
}