// Recursive function to print n natural numbers

#include<iostream>
using namespace std;

void print_n(int n)
{
  if(n>0)
  {
    print_n(n-1);
    cout<<n<<", ";
  }
}

void print_n_reversed(int n)
{
  if(n>0)
  {
    cout<<n<<", ";
    print_n_reversed(n-1);
  }
}

int main()
{
  print_n(5);
  cout<<endl;
  print_n_reversed(5);
  cout<<endl;
  return 0;
}