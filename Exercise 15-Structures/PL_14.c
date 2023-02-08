/* *****************************************************************************************************************
Lab ID        : 8.1
Program Title : Basics of C Programming
Author        : Haysten D'costa
Roll No.      : 21co56
Class         : Comp B[Batch C3]
Language      : C
Due Date      : --
--------------------------------------------------------------------------------------------------------------------
Description   : C Program to find the sum  of two matrices....
Input         : two matrices
Output        : resultant, sum martix
Algorithm     : --
Prerequisites : Basics of C
Known Bugs    : NOT FINALIZED ****** NEED TO RE EDIT ****** NOT FUNCTIONAL....
***************************************************************************************************************** */
#include<stdio.h>
#include<string.h>
union students
{
    char name[20];
    int rollno;
    float marks;
}s1,s2;
void main()
{
    printf("\nEnter details of student 1");
    printf("\n\nName : ");
    fflush(stdin);
    gets(s1.name);
    printf("Roll no. : ");
    scanf("%d",&s1.rollno);
    printf("Marks obtained in CP: ");
    scanf("%f",&s1.marks);
    printf("\n");
    printf("\n");
    printf("\nEnter details of student 2");
    printf("\n\nName : ");
    fflush(stdin);
    gets(s2.name);
    printf("Roll no. : ");
    scanf("%d",&s2.rollno);
    printf("Marks obtained in CP: ");
    scanf("%f",&s2.marks);
    printf("\n");
    printf("\n");
    printf("\nDetails of Student 1 :\n");
    printf("\nName : %s",s1.name);
    printf("\nRoll no. : %d",s1.rollno);
    printf("\nMarks obtained : %f",s1.marks);
    printf("\n");
    printf("\nDetails of Student 2:\n");
    printf("\nName : %s",s2.name);
    printf("\nRoll no. : %d",s2.rollno);
    printf("\nMarks obtained : %f",s2.marks);
    printf("\n");

}
