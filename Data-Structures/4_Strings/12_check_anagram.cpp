#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1 , string s2) {
  vector<int> freq(26);

  for(char c: s1) 
    freq[c-'a']++;

  for(char c: s2) 
    freq[c-'a']--;

  for(int i=0; i<26; i++) {
    if(freq[i] != 0) 
      return false;
  }

  return true;
}

int main() {
  string s1="decimal";
  string s2="medical";
  cout<<isAnagram(s1, s2)<<endl;

  s1 = "portal";
  s2 = "laptop";
  cout<<isAnagram(s1, s2)<<endl;


  return 0;
}