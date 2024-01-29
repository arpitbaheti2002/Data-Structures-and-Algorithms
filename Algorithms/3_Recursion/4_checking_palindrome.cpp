#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, int j) {
    if(i>j)
      return true;
    
    return (s[i]==s[j] && isPalindrome(s, i+1, j-1));
}

int main() {
  cout<<isPalindrome("abbcbba", 0, 6)<<endl;
  cout<<isPalindrome("abba", 0, 3)<<endl;
  cout<<isPalindrome("geeks", 0, 4)<<endl;

  return 0;
}