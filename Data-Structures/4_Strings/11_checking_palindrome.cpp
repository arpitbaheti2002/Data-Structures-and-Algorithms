#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
  int i=0, j=s.size()-1;

  while(i<j) {
    if(s[i]!=s[j])
      return false;
    
    i++;
    j--;
  }

  return true;
}

int main() {
  string s1="madam";
  string s2="modern";

  cout<<isPalindrome(s1)<<endl;
  cout<<isPalindrome(s2)<<endl;

  return 0;
}