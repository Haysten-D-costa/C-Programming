//CP TO CHECK WHETHER NO.IS EVEN OR ODD:
//HAYSTEN D'COSTA(21co56)
#include<stdio.h>
int main()
{
    //DECLARATION OF VARIABLES
    int num;

    //INPUT OF VARIABLES
    printf("Enter  a number :  ");
    scanf("%d",&num);

    //PROCESS(STATEMENTS) AND OUTPUT
    if (num%2==0)
    {
        printf("Number entered is %d\n",num);
        printf("Number entered is an EVEN no.\n");
    }
    else
    {
        printf("Number entered is a%d\n",&num);
        printf("Number entered is an ODD no.\n");
    }
    return(0);
}
