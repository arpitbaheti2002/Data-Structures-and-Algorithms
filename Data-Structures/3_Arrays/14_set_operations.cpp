#include<bits/stdc++.h>
using namespace std;

void display(vector<int> a) {
  for(int i=0; i<a.size(); i++) {
    cout<<a[i]<<", ";
  }
  cout<<endl;
}

vector<int> get_union(vector<int> &st1, vector<int> &st2, int n, int m) {
  int i=0, j=0;
  vector<int> res;

  while(i<n && j<m) {
    if(st1[i]<st2[j]) {
      res.push_back(st1[i]);
      i++;
    }
    else if(st1[i]>st2[j]) {
      res.push_back(st2[j]);
      j++;
    }
    else {
      res.push_back(st1[i]);
      i++;
      j++;
    }
  }

  while(i<n) {
    res.push_back(st1[i]);
    i++;
  }

  while(j<m) {
    res.push_back(st2[j]);
    j++;
  }

  return res;
}

vector<int> get_intersection(vector<int> &st1, vector<int> &st2, int n, int m) {
  int i=0, j=0;
  vector<int> res;

  while(i<n && j<m) {
    if(st1[i]<st2[j]) {
      i++;
    }
    else if(st1[i]>st2[j]) {
      j++;
    }
    else {
      res.push_back(st1[i]);
      i++;
      j++;
    }
  }

  return res;
}

vector<int> get_difference(vector<int> &st1, vector<int> &st2, int n, int m) {
  int i=0, j=0;
  vector<int> res;

  while(i<n && j<m) {
    if(st1[i]<st2[j]) {
      res.push_back(st1[i]);
      i++;
    }
    else if(st1[i]>st2[j]) {
      j++;
    }
    else {
      i++;
      j++;
    }
  }

  while(i<n) {
    res.push_back(st1[i]);
    i++;
  }

  return res;
}

int main() {
  vector<int> st1({3,4,5,6,10});
  vector<int> st2({2,4,5,7,12});

  cout<<"union:- "<<endl;
  vector<int> r1 = get_union(st1, st2, 5, 5);
  display(r1);

  cout<<"intersection:- "<<endl;
  vector<int> r2 = get_intersection(st1, st2, 5, 5);
  display(r2);

  cout<<"A-B:- "<<endl;
  vector<int> r3 = get_difference(st1, st2, 5, 5);
  display(r3);

  cout<<"B-A:- "<<endl;
  vector<int> r4 = get_difference(st2, st1, 5, 5);
  display(r4);

  return 0;
}