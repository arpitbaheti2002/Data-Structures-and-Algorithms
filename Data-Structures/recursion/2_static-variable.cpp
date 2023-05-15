#include<iostream>
using namespace std;

int fun(int n)
{
  static int x=0;
  if(n<=0)
  {
    return 0;
  }
  x++;
  return fun(n-1)+x;
}

/* 
fun(5): (x=1)   return 20+5
fun(4): (x=2)   return 15+5
fun(3): (x=3)   return 10+5
fun(2): (x=4)   return 5+5
fun(1): (x=5)   return 0+5
fun(0): return 0
*/
/* 
fun(5): (x=6)   return 40+10
fun(4): (x=7)   return 30+10
fun(3): (x=8)   return 20+10
fun(2): (x=9)   return 10+10
fun(1): (x=10)   return 0+10
fun(0): return 0
*/

int main()
{
  int r;
  r = fun(5);
  cout<<r<<endl;

  r = fun(5);
  cout<<r<<endl;

  return 0;
}