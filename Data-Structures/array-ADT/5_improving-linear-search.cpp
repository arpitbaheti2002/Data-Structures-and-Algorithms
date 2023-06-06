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

    void populate(int*arr, int n)
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
      {
        cout<<A[i]<<", ";
      }
      cout<<endl;
    }

    // Transposition method:
    // Whenever we search a element in the array, we swap it
    // with the index just before it.
    int LinearSearch1(int key)
    {
      for(int i=0; i<len; i++)
      {
        if(key == A[i])
        {
          if(i==0)
            return i;
          else
          {
            swap(A[i], A[i-1]);
            return i;
          }
        }
      }
      return -1;
    }

    // Move to front/head method:
    // Whenever we search a element in the array, we swap it
    // with the the first elemet.
    int LinearSearch2(int key)
    {
      for(int i=0; i<len; i++)
      {
        if(key == A[i])
        {
          swap(A[i], A[0]);
          return i;
        }
      }
      return -1;
    }
};

int main()
{
  int temp[] = {8,9,4,7,6,3,10,5,14,2};
  Array arr(10);
  arr.populate(temp, 10);

  arr.display();
  cout<<"7 found at index: "<<arr.LinearSearch1(7)<<endl;
  cout<<"7 found at index: "<<arr.LinearSearch1(7)<<endl;
  arr.display();

  cout<<"14 found at index "<<arr.LinearSearch2(14)<<endl;
  arr.display();
  return 0;
}