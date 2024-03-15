#include<bits/stdc++.h>
using namespace std;

string compare(string s1, string s2) {
  int i=0;

  for(; i<min(s1.size(), s2.size()); i++) {
    if(s1[i]<s2[i]) {
      return "smaller";
    }
    else if(s1[i]>s2[i]) {
      return "greater";
    }
  }

  if(i<s1.size()) {
    return "greater";
  }

  if(i<s2.size()) {
    return "smaller";
  }

  return "equal";
}

int main() {
  string a="ABCDE";
  string b="ABCDE";
  cout<<compare(a, b)<<endl;

  a="ABCD";
  b="ABCE";
  cout<<compare(a, b)<<endl;

  a="ABC";
  b="ABCD";
  cout<<compare(a, b)<<endl;

  a="ABCD";
  b="ABC";
  cout<<compare(a, b)<<endl;

  return 0;
}