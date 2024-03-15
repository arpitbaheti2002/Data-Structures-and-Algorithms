#include<bits/stdc++.h>
using namespace std;

// Here we try to make a HashMap using a single int and manipulate it using bitwise operations

void printDuplicates(string s) {
  int freq=0;

  for(char c: s) {
    if(c!=' ') {
      int x = 1<<(c-'a');

      if((freq&x) != 0) {
        cout<<c<<endl;
      }

      freq = (freq|x);
    }
  }

}

int main() {
  string s="finding food is fun";
  printDuplicates(s);

  return 0;
}