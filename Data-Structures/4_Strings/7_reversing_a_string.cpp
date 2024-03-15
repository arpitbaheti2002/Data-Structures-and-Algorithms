#include<bits/stdc++.h>
using namespace std;

string reverse(string s) {
  int i=0, j=s.size()-1;

  while(i<j) {
    swap(s[i], s[j]);
    i++;
    j--;
  }

  return s;
}

int main() {
  string s = "reverse this string";

  cout<<reverse(s)<<endl;

  return 0;
}