//CP TO DEMONSTRATE RUN TIME INITIALIZATION OF 1D ARRAY
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
#define size 50
void main()
{
    //Declaration of variables
    int A[size],i,n;
    //Input of variables
    printf("\nEnter the no. of elements of the array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array:  ");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
              /*RUN TIME INITIALIZATION OF ARRAY
        IN THIS TYPE, THE ARRAY ELEMENTS ARE INPUTED BY USER......*/
    //Output
    printf("\nThe array you entered is as follows:\n\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
}
