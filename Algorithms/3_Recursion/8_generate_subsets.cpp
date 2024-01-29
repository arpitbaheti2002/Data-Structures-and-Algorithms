#include<bits/stdc++.h>
using namespace std;

void printSubsets(string s, string curr, int i) {
  if(i==s.size()) {
    cout<<curr<<endl;
    return;
  }

  printSubsets(s, curr, i+1);
  printSubsets(s, curr+s[i], i+1);
}

int main() {
  printSubsets("AB", "", 0);
  cout<<endl;
  printSubsets("ABC","", 0);
  return 0;
}