// get(), set(), max(), min(), sum(), avg()

#include<iostream>
using namespace std;

class Array
{
  public:
    int* A;
    int size;
    int length;

    Array(int sz)
    {
      size = sz;
      A = new int[size];
      length = 0;
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
        length++;
      }
    }

    // Function to display all elements of an array
    void display()
    {
        int i;
        for(i=0; i<length; i++)
          cout<<A[i]<<", ";
        cout<<endl;
    }

    // Function to get element at a given index
    int get(int index)
    {
      if(index>=0 && index<length)
        return A[index];
      return -1;
    }

    // Function to set element at a given index
    void set(int x, int index)
    {
      if(index>=0 && index<length)
        A[index] = x;
    }

    // Function to find the minimum value from an array
    int min()
    {
      if(length==0)
        return -1;
      
      int res = A[0];
      for(int i=1; i<length; i++)
      {  
        if(A[i]<res)
          res = A[i];
      }
      return res;
    }

    // Function to find the maximum value from an array
    int max()
    {
      if(length==0)
        return -1;
      
      int res = A[0];
      for(int i=1; i<length; i++)
      {  
        if(A[i]>res)
          res = A[i];
      }
      return res;
    }

    // Function to find sum of all the elements (iterative form):
    int sum()
    {
      int total=0;
      for(int i=0; i<length; i++)
        total += A[i];
      return total;
    }

    // Function to find sum of all the elements (recursive form):
    int Rsum(int n)
    {
      if(n<0)
        return 0;
      return A[n]+Rsum(n-1);
    }

    // Function to find the average of elements in an array
    double avg()
    {
      return ((float)sum())/(length);
    }
};

int main()
{
  Array arr(10);
  int temp[] = {4,8,10,15,18,21,24};
  arr.populate(temp, 7);
  
    // get():
    cout<<"Element at index 2 is "<<arr.get(2)<<endl;
    
    // set():
    arr.set(9, 2);
    arr.display();

    // max():
    cout<<"Maximum element in the array is "<<arr.max()<<endl;

    // min():
    cout<<"Minimum element in the array is "<<arr.min()<<endl;

    // sum():
    cout<<"The sum of all elements is "<<arr.sum()<<endl;
    cout<<"The sum of all elements is "<<arr.Rsum(arr.length-1)<<endl;

    // avg():
    cout<<"The average of elemets is "<<arr.avg()<<endl;
    return 0;
}