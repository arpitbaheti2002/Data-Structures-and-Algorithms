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

    // Iterative Binary Search
    int binarySearch(int key)
    {
      int low=0, high=length-1;
      while(low<=high)
      {
        int mid = (low+high)/2;
        if(A[mid] == key)
          return mid;
        else if(A[mid]<key)
          low = mid+1;
        else
          high = mid-1;
      }
      return -1;
    }

    // Recursive Binary Search
    int RbinarySearch(int low, int high, int key)
    {
      if(low>high)
        return -1;
      
      int mid=(low+high)/2;

      if(A[mid] == key)
        return mid;
      else if(A[mid]<key)
        return RbinarySearch(mid+1, high, key);
      else
        return RbinarySearch(low, mid-1, key);
    }
};

int main()
{
  Array arr(10);
  int temp[] = {4,8,10,15,18,21,24};
  arr.populate(temp, 7);
  cout<<arr.binarySearch(15)<<endl;
  cout<<arr.RbinarySearch(0, 6, 18)<<endl;
  return 0;
}