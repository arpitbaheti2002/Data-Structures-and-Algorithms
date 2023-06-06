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

    int Delete(int index)
    {
      int x=0, i;
      if(index>=0 && index<len)
      {
          x=A[index];
          for(i=index; i<len; i++)
              A[i] = A[i+1];
          len--;
      }
      return x;
    }
};

int main()
{
  int temp[]={8,3,7,15,6,9,10};
  Array arr(10);
  arr.populate(temp, 7);

  arr.display();
  cout<<arr.Delete(5)<<" was deleted."<<endl;
  arr.display();
  return 0;
}