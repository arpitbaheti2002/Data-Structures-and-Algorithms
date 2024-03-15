#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
  for(int i=0; s[i]!='\0'; i++) {
    if(!(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9')) {
      return false;
    }
  }

  return true;
}

int main() {
  string s1 = "WelCoME";
  string s2 = "WelCoME95";
  string s3 = "WelCoME@95";

  cout<<isValid(s1)<<endl;
  cout<<isValid(s2)<<endl;
  cout<<isValid(s3)<<endl;

  return 0;
}