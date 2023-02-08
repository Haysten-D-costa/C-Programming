//CP COMPILE TIME INITIALIZATION USINNG and display output elements usingLOOP(if)
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
int main()
{
    //Declaration and initialization of variables
    int A[5]={2,4,6,8,10};
    int i;

    //Output of array elements
    printf("\nEntered elements of array are as follows:\n\n");

    //Loop for easy output process
    for(i=0;i<=4;i++)
        printf("\nValue of %d element = %d",i,A[i]);

    return(0);

}
