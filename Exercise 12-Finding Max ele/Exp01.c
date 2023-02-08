//CP TO FIND MAX ELEMENT IN ARRAY USING A POINTER
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
void main()
{
    //DECLARATION AND INITIALIZATION OF VARIABLES AND POINTER
    int A[20],i,n,max;
    int *ptr=A;
    //INPUT OF VARIABLES
    printf("Enter the number of elements to be inserted :\n");
    scanf("%d",&n);
    //INPUT OF ARRAY A ELEMENTS
    printf("\nEnter the elements of array A :\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    //PROCEESS OF FINDING LARGEST ELEMENT
    max=A[0];
    for(i=0;i<n;i++)
    {
        if(*ptr>max)
            max=*ptr;
        ptr++;
    }
    //OUTPUT OF ARRAY ENTERED
    printf("\nThe array you entered is :\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    //OUTPUT OF MAX ELEMENT IN THE ARRAY
    printf("\n\nMAX element in the above array is %d",max);
}
