#include<bits/stdc++.h>
using namespace std;

int add(int n1, int n2)
{
  int temp;
  temp = n1+n2;
  return temp;
}

int subtract(int n1, int n2)
{
  int temp;
  temp = n1-n2;
  return temp;
}

int main()
{
  int num1=10, num2=5;
  cout<<num1<<" + "<<num2<<" = "<<add(num1, num2)<<endl;
  cout<<num1<<" - "<<num2<<" = "<<subtract(num1, num2)<<endl;

  int num3=7, num4=3;
  cout<<num3<<" + "<<num4<<" = "<<add(num3, num4)<<endl;
  cout<<num3<<" - "<<num4<<" = "<<subtract(num3, num4)<<endl;

  return 0;
}