// Array is always passed address (it can never be passed by value)
// Therefore, changes made in array inside the function are reflected in actual array.

#include<iostream>
using namespace std;

// Taking array as parameter
void fun(int* A, int n)
{
    for(int i=0; i<n; i++)
    {
        A[i]++;
    }
}

// returning array 
int* getArray(int n)
{
    int *p;
    p = new  int[n];

    for(int i=0; i<n; i++)
    {
        p[i] = i+1;
    }

    return p;
}

int main()
{
    int A[] = {1,2,3,4,5};
    // Passing array as parameter (call by address)
    fun(A,5);
    cout<<"Array A: "<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<A[i]<<", ";
    }
    cout<<endl<<endl;

    int *B;
    // Function returning a array
    B=getArray(5);

    cout<<"Array A+B: "<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<B[i]<<", ";
    }
    cout<<endl<<endl;

    return 0;
}