//CP TO FIND SMALLEST ELEMENT IN ARRAY
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
void main()
{
    //Declaration and initialization of variables
    int s,A[10]={10,74,1000,5,0,823,9,28,43,50},i,I;
    //Output and process
    printf("\nFinding smallest element from the array:\n\n");
    for(i=0;i<10;i++)
        printf("%d\t",A[i]);
    s=A[1];
    for(i=0;i<10;i++)
        {
            if(A[i]<s)
                {
                    s=A[i];
                    I=i;
                }
        }
         printf("\n\nSmallest element in the above array = %d at position %d",s,I);

}
