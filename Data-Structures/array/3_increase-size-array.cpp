#include<iostream>
using namespace std;

int main()
{
  // we have an array of size 5 that is completely filled
  int *p = new int[5];
  int size=5, n=0;

  while(n<size)
  {
    p[n] = n*2;
    n++;
  }

  // Now if we need to insert any new element, we need to increase
  // the size of the array.
  int ele;
  cout<<"Enter new element: ";
  cin>>ele;

  int *q = new int[2*size];
  for(int i=0; i<size; i++)
  {
    q[i] = p[i];
  }

  delete []p;
  p = q;
  q = NULL;
  size = size*2;
  p[n++] = ele;

  for(int i=0; i<n; i++)
  {
    cout<<p[i]<<", ";
  }
  cout<<endl;

  return 0;
}