#include<iostream>
using namespace std;

int main()
{
    // Declaration and initialization :-
    int A[5];
    int B[5] = {1,2,3,4,5};
    int C[5] = {0};
    int D[5] = {1,2,3};
    int E[] = {1,2,3,4,5};

    // variable sized array :-
    /*
        Note variable sized array cannot be initialized
    */
    int n;
    cout<<"Enter size of array :- ";
    cin>>n;
    int F[n];

    // Dynamic allocation of array (in Heap):-
    int *G;
    G = new int[n];

    // Accessing values :-
    A[0] = 3;
    A[1] = 4;

    // Traversing an array
    
    for(int i=0; i<5; i++)
        cout<<B[i]<<", ";
    cout<<endl;

    for(int i:B)
        cout<<i<<", ";
    cout<<endl;

    return 0;
}