#include<iostream>
using namespace std;

class Array
{
  public:
    int *arr;
    int size;
    int len;

    Array(int n)
    {
      size = n;
      len = 0;
      arr = new int[size];
    }

    void add_back(int x)
    {
      if(len<size)
      {
        arr[len] = x;
        len++;
      }
    }

    void display()
    {
      for(int i=0; i<len; i++)
        cout<<arr[i]<<", ";
      cout<<endl;
    }
};

int main()
{
  int n, x;
  cout<<"Enter size of array: ";
  cin>>n;

  Array arr(n);
  
  cout<<"Enter number of elements to enter: ";
  cin>>x;
  cout<<"Enter the elements: "<<endl;
  for(int i=0; i<x; i++)
  {
    int temp;
    cin>>temp;
    arr.add_back(temp);
  }
  
  arr.display();

  return 0;
}