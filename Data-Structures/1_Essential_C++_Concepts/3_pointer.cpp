#include<bits/stdc++.h>
using namespace std;

int main()
{
  // pointer to a variable
  double a=10.1;
  double *p1;
  p1 = &a;
  cout<<"Value at address "<<p1<<" is "<<*p1<<endl;

  // pointer to a array
  int *p2 = new int[5];

  for(int i=0; i<5; i++)
  {
    cout<<"Enter value "<<i+1<<": ";
    cin>>p2[i];
  }

  for(int i=0; i<5; i++)
  {
    cout<<p2[i]<<", ";
  }
  cout<<endl;

  return 0;
}