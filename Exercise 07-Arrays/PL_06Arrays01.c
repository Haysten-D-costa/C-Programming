//CP DEMONSTRATE COMPILE TIME INITIALIZATION OF ID ARRAY
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
#define size 100
void main()
{
    //Declaration and initialization[cpT] of variables
    int A[5]={2,4,6,8,10},i;
                /*COMPILE TIME INITIALIZATION OF ARRAY
        IN THIS TYPE, THE ARRAY ELEMENTS ARE INITIALIZED DURING COMPILATION.....*/
    //Output
    printf("\nElements of array are as follows:\n\n");
    for(i=0;i<5;i++)
    printf("%d\t",A[i]);

}
