#include<bits/stdc++.h>
using namespace std;

void swap_pass_by_value(int a, int b)
{
  int temp = b;
  b = a;
  a = temp;
}

void swap_pass_by_address(int *a, int *b)
{
  int temp = *b;
  *b = *a;
  *a = temp;
}

void swap_pass_by_reference(int &a, int &b)
{
  int temp = b;
  b = a;
  a = temp;
}

int main()
{
  int num1, num2;

  num1 = 5;
  num2 = 10;
  cout<<"Number 1:- "<<num1<<endl;
  cout<<"Number 2:- "<<num2<<endl;
  cout<<endl;

  cout<<"Swapping using pass by value"<<endl;
  // Swapping does not work in pass by value because actual parameters do not change
  swap_pass_by_value(num1, num2);
  cout<<"Number 1:- "<<num1<<endl;
  cout<<"Number 2:- "<<num2<<endl;
  cout<<endl;

  num1 = 5;
  num2 = 10;
  cout<<"Swapping using pass by address"<<endl;
  swap_pass_by_address(&num1, &num2);
  cout<<"Number 1:- "<<num1<<endl;
  cout<<"Number 2:- "<<num2<<endl;
  cout<<endl;

  num1 = 5;
  num2 = 10;
  cout<<"Swapping using pass by value"<<endl;
  swap_pass_by_reference(num1, num2);
  cout<<"Number 1:- "<<num1<<endl;
  cout<<"Number 2:- "<<num2<<endl;
  cout<<endl;

  return 0;
}