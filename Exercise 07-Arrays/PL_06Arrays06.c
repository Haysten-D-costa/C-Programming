//CP TO IMPLEMENT A LINEAR SEARCH
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
void main()
{
    //Declaration and initialization of variables
    int A[10]={10,47,05,10,38,500,10,99,71,20},i,I,search,count=0;
    //Input of variables
    printf("\nEnter the element to be searched: ");
    scanf("%d",&search);
    //Output and process
    printf("\nFinding the desired element from the array:\n\n");
    for(i=0;i<10;i++)
        printf("%d\t",A[i]);
    for(i=0;i<10;i++)
    {
        if(A[i]==search)
            count=count+1;
    }
    printf("\n\nElement %d found %d times in the array.",search,count);

}
