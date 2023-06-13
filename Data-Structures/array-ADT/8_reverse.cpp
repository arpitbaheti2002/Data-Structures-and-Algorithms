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

    void reverse()
    {
      int left=0, right=len-1;
      while(left<right)
      {
        swap(A[left], A[right]);
        left++;
        right--;
      }
    }
};

int main()
{
  int temp[] = {8,3,9,15,6,10,7,2,12,4};
  Array arr(15);
  arr.populate(temp, 10);
  arr.display();
  arr.reverse();
  arr.display();

  return 0;
}