//CP TO ADD ALL EVEN TERMS IN AN ARRAY
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
void main()
{
    //Declaration of variables
    int A[10]={2,9,4,7,6,0,5,3,8,10},i,sum=0;
    //Output
    printf("\nThe array is:\n\n");
    for(i=0;i<10;i++)
        printf("%d\t",A[i]);

    for(i=0;i<10;i++)
    {
        if(A[i]%2==0)
        {
            sum=sum+A[i];
        }
    }
    printf("\n\nSUM of all even terms in above array = %d",sum);
}
