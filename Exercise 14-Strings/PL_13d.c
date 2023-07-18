//CP TO IMPLEMENT "STRLEN" FUNCTION
//HAYSTEN D'COSTA(21CO56)
#include<stdio.h>
//STRING HEADER FILE
#include<string.h>
void main()
{
    //DECLATATION OF STRING AND VARIABLE
    char word[20];
    int L;
    //INPUT OF STRING
    printf("Enter longest word : ");
    gets(word);
    //STRING FUNCTION OPERATION
    L=strlen(word);
    //OUTPUT OF STRING
    printf("\nLength(no.of characters) of word is : %d",L);
}
