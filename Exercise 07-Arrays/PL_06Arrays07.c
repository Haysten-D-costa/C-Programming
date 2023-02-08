//CP TO COUNT AND DISPLAY POSITIVE AND NEGATIVE VALUES IN AN ARRAY
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
void main()
{
    //Declaration and initialization of variables
    int A[10]={10,36,91,-92,0,67,-3,-1,-29,100},i,count=0;
    //Output
    printf("\nThe array is:\n\n");
    for(i=0;i<10;i++)
        printf("%d\t",A[i]);
    printf("\n\nPositive terms in the array are:\n");
    for(i=0;i<10;i++)
    {
        if(A[i]>=0)
            printf("%d\t",A[i]);
    }
    printf("\n\nNegative terms in the array are:\n");
    for(i=0;i<10;i++)
    {
        if(A[i]<0)
            printf("%d\t",A[i]);
    }
    for(i=0;i<10;i++)
        count=count+1;
    printf("\n\nCount(No of elements) = %d",count);
    printf("\n");
    printf("\n");
    printf("\n");
}
