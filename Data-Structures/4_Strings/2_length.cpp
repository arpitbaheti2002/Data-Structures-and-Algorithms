#include<bits/stdc++.h>
using namespace std;

int getLength(string s) {
  int i=0;

  while(s[i]!='\0') {
    i++;
  }

  return i;
}

int main() {
  string s1 = "welcome";
  string s2 = "APpu";

  cout<<getLength(s1)<<endl;
  cout<<getLength(s2)<<endl;

  return 0;
}