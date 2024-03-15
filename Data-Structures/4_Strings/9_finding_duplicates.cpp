#include<bits/stdc++.h>
using namespace std;

void printDuplicates(string s) {
  vector<int> freq(26);

  for(char c: s) {
    freq[c-'a']++;
  }

  for(int i=0; i<26; i++) {
    if(freq[i]>1) {
      cout<<char('a'+i)<<" : "<<freq[i]<<endl;
    }
  }
}

int main() {
  string s="finding food is fun";
  printDuplicates(s);

  return 0;
}