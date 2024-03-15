#include<bits/stdc++.h>
using namespace std;

void vowelsAndConsonants(string s) {
  int n=s.size();
  int vowels=0, consonants=0;

  for(int i=0; i<n; i++) {
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' 
      || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') {
        vowels++;
    }
    else {
      consonants++;
    }   
  }

  cout<<"vowels: "<<vowels<<endl;
  cout<<"consonants: "<<consonants<<endl;
}

int main() {
  string s = "WelCoME";

  vowelsAndConsonants(s);

  return 0;
}