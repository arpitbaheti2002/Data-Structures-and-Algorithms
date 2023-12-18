// Array is a collection of similar data elements.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration of array:-
    int A[5];
    // Initailizing a array:-
    A[0]=1;
    A[1]=2;
    A[2]=3;
    A[3]=4;
    A[4]=5;
    // Declration as well as initialization :-
    int B[5] = {1,2,3,4,5};
    // Initailizing all elements as 0:-
    int C[5] = {0};
    int D[5] = {1,2,3};         // first 3 elements are initialized and rest of them are 0
    
    // Accessing an array:-
    for(int i=0; i<5; i++)
    {
        cout<<B[i]<<", ";
    }
    cout<<endl<<endl;

    // this works only in C++
    for(int i:C)
    {
        cout<<i<<", ";
    }
    cout<<endl<<endl;

    // To see the siz of a array:-
    cout<<"Size of array is "<<sizeof(A)<<endl;

    // Variable sized array:-
    int n;
    printf("\n\nEnter the size of array:- ");
    scanf("%d",&n);

    int V[n];       // variable sized array cannot be declared at time of initialization

    for(int i=0; i<n; i++)
    {
        cout<<"Enter value of V["<<i<<"]:- ";
        cin>>V[i];
    }
    cout<<endl<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<"V["<<i<<"]:- "<<V[i]<<endl;
    }

    return 0;
}

// This type of array declaration resides in main() part of stack section of memory.
// Arrays decared dynamically appear on heap section of memory.