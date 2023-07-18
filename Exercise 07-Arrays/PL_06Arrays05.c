//CP TO FIND LARGEST ELEMENT IN ARRAY
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
void main()
{
    //Declaration and initialization of variables
    int l,A[10]={10,74,1000,5,0,823,9,28,43,50},i,I;
    //Output and Process
    printf("\nFinding largest element from the array:\n\n");
    for(i=0;i<10;i++)
        printf("%d\t",A[i]);
    l=A[1];
    for(i=0;i<10;i++)
        {
            if(A[i]>l)
                {
                    l=A[i];
                    I=i;
                }
        }
         printf("\n\nLargest element in the above array = %d at position %d",l,I);

}

