#include<bits/stdc++.h>
using namespace std;

// cut the rope of length n in lengths of a or b or c. Return the maximum number of cuts

int cutRope(int n, int a, int b, int c) {
  if(n==0)
    return 0;
  
  else if(n<0)
    return -1;
  
  int res = -1;

  res = max(res, cutRope(n-a, a, b, c));
  res = max(res, cutRope(n-b, a, b, c));
  res = max(res, cutRope(n-c, a, b, c));

  if(res==-1)
    return res;
  else
    return 1+res;
}

int main() {
  cout<<cutRope(5, 2, 5, 1)<<endl;
  cout<<cutRope(23, 12, 9, 11)<<endl;
  cout<<cutRope(5, 4, 2, 6)<<endl;

  return 0;
}