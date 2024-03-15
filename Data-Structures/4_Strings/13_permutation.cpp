#include<bits/stdc++.h>
using namespace std;

void printPermutations(string s, int idx) {
  if(idx==s.size()) {
    cout<<s<<endl;
  }

  for(int i=idx; i<s.size(); i++) {
    swap(s[i], s[idx]);
    printPermutations(s, idx+1);
    swap(s[i], s[idx]);
  }
}

int main() {
  printPermutations("ABC", 0);
  cout<<endl;
  printPermutations("ABCD", 0);
  cout<<endl;


  return 0;
}