#include<bits/stdc++.h>
using namespace std;

int words(string s) {
  int n=s.size(), res=0;

  for(int i=0; i<n; i++) {
    if (s[i] != ' ') {
      if (i == 0 || s[i - 1] == ' ') {
          res++;
      }
    }

  }

  return res;
}

int main() {
  string s1 = "How are you u";
  string s2 = "   How  are you   u   ";

  cout<<words(s1)<<endl;
  cout<<words(s2)<<endl;

  return 0;
}