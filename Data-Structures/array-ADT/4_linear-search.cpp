#include<iostream>
using namespace std;

class Array
{
  public:
    int* A;
    int size;
    int len;

    Array(int sz)
    {
      A = new int[sz];
      size = sz;
      len = 0;
    }

    void populate(int* arr, int n)
    {
      if(n>size)
      {
        cout<<"Length of array exceeds size"<<endl;
        return;
      }
      for(int i=0; i<n; i++)
      {
        A[i] = arr[i];
        len++;
      }
    }

    void display()
    {
      for(int i=0; i<len; i++)
        cout<<A[i]<<", ";
      cout<<endl;
    }

    int search(int key)
    {
      for(int i=0; i<len; i++)
      {
        if(A[i]==key)
          return i;
      }
      return -1;
    }
};

int main()
{
  int temp[]={8,3,7,15,6,9,10};
  Array arr(10);
  arr.populate(temp, 7);

  arr.display();
  cout<<"15 was found in index "<<arr.search(15)<<endl;
  return 0;
}