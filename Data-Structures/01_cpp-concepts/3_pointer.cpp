// Pointer is a address variable that is meant for storing address of data.
// They are used to :-
//      1. Accessing heap memory
//      2. Accessing Resources
//      3. Parameter passing

// Pointer occupies ize of a integer, irrespective of datatype of variable whose
// address is stored in it. (in latest compilers it takes 8 bytes.)

#include<stdio.h>
#include<stdlib.h>

int main()
{
// Declaring Pointer
    int *p1;
    int a = 10;
    p1 = &a;

    printf("\na = %d",a);
    printf("\n*p1 = %d",*p1);

    int A[]={1,2,3,4,5};
    int *p2;
    p2 = A;
    // we do not use '&' when we give array name to a pointer.

    printf("\n\n");
    for (int i=0; i<5; i++)
    {
        printf("%d, ",*(p2+i));
    }

    // using pointer to access heap memory
    int *p3;
    p3 = new int[5];                 

    delete p1;
    delete p2;
    delete [] p3;                       
    // square bracket must be used in case of deleing an array.
    return 0;
}