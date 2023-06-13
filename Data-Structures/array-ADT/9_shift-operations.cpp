// Performing the following operations:
// 1. Left Shift
// 2. Right Shift
// 3. Left Rotation
// 4. Right Rotation

#include<iostream>
using namespace std;

class Array
{
  public:
    int* A;
    int len;
    int size;

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
        cout<<"Length of array exceeds size."<<endl;
        return;
      }

      for(int i=0; i<n; i++)
      {
        A[i]=arr[i];
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

    // Left Shift
    void Lshift()
    {
      int i;
      for(i=0; i<len-1; i++)
        A[i] = A[i+1];
      A[len-1] = 0;
    }

    // Right Shift
    void Rshift()
    {
      int i;
      for(i=len; i>0; i--)
        A[i] = A[i-1];
      A[0] = 0;
    }

    // Right Rotation
    void RRotation()
    {
      int i, x=A[len-1];
      for(i=len; i>0; i--)
        A[i] = A[i-1];
      A[0] = x;
    }

    // Left Rotation
    void LRotation()
    {
      int i, x=A[0];
      for(i=0; i<len-1; i++)
        A[i] = A[i+1];
      A[len-1] = x;
    }
};

int main()
{
  int temp[] = {1,3,2,6,5,4};
  Array arr(15);
  arr.populate(temp, 6);
  arr.display();
  
  // Left Shift
  arr.Lshift();
  arr.display();

  // Right Shift
  arr.Rshift();
  arr.display();

  // Right Rotation
  arr.RRotation();
  arr.display();

  // Left Rotation
  arr.LRotation();
  arr.display();

  return 0;
}