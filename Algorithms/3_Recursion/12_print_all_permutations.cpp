#include<bits/stdc++.h>
using namespace std;

// Given a string, print all it's permutations
void printPermutations(string s, int i) {
  if(i==s.size()-1)
    cout<<s<<endl;
  
  for(int j=i; j<s.size(); j++) {
    swap(s[i], s[j]);
    printPermutations(s, i+1);
    swap(s[i], s[j]);
  }
}

int main() {
  printPermutations("ABC", 0);
  cout<<endl;
  printPermutations("AB", 0);

  return 0;
}