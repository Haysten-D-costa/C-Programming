//CP TO ACCEPT N ELEMENTS FROM USER AND DISPLAY SUM AND AVERAGE
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
#define size 50
void main()
{
    //Declaration of variables
    int A[size],Sum=0,Avg,n,i;
    //Input of variables
    printf("\nEnter the no. of elements: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    //Process
    for(i=0;i<n;i++)
    {
        Sum=Sum+A[i];
    }
    Avg=(Sum/n);
    //Output
    printf("\nThe array you inputed :\n\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    printf("\n\nSum of the above elements of array = %d",Sum);
    printf("\nAverage of above elements of array = %d",Avg);
}
