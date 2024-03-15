#include<bits/stdc++.h>
using namespace std;

string toLowerCase(string s) {
  int n=s.size();

  for(int i=0; i<n; i++) {
    if(s[i]>='A' && s[i]<='Z') {
        s[i] = s[i]-'A'+'a';
    }
  }

  return s;
}

string toUpperCase(string s) {
  int n=s.size();

  for(int i=0; i<n; i++) {
    if(s[i]>='a' && s[i]<='z') {
        s[i] = s[i]-'a'+'A';
    }
  }

  return s;
}

string toggleCase(string s) {
  int n=s.size();

  for(int i=0; i<n; i++) {
    if(s[i]>='a' && s[i]<='z') {
        s[i] = s[i]-'a'+'A';
    }

    else if(s[i]>='A' && s[i]<='Z') {
        s[i] = s[i]-'A'+'a';
    }
  }

  return s;
}

int main() {
  string s = "WelCoME";

  cout<<toLowerCase(s)<<endl;
  cout<<toUpperCase(s)<<endl;
  cout<<toggleCase(s)<<endl;

  return 0;
}