#include<iostream>
using namespace std;

class Array
{
  public:
    int* arr;
    int size;
    int len;

    Array(int *a, int n, int sz)
    {
      len = 0;
      for(int i=0; i<n; i++)
      {
        arr[i] = a[i];
        len++;
      }
      size = sz;
    }

    void display()
    {
      for(int i=0; i<len; i++)
      {
        cout<<arr[i]<<", ";
      }
      cout<<endl;
    }

    // adding element at end of an array
    void add(int x)
    {
      if(len<size)
      {
        arr[len++] = x;
      }
    }

    // inserting at a given index
    void insert(int x, int index)
    {
      if(len<size && (index>=0 && index<size))
      {
        for(int i=len; i>index; i--)
          arr[i] = arr[i-1];
      }
      arr[index] = x;
      len++;
    }
};

int main()
{
  int temp[] = {8,3,7,12,6,9};
  Array arr(temp, 6, 20);
  arr.display();
  arr.add(10);
  arr.display();
  arr.insert(15, 3);
  arr.display();
  return 0;
}