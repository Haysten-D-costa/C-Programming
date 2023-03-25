//CP TO IMPLEMMENT A CALCULATOR USING MATH HEADER FILE
//HAYSTEN D'COSTA (21CO56)
#include<math.h>    //TO PERFORM MATHEMATICS OPERATIONS
#include<stdio.h>   //TO PERFORM REGULAR C OPERATIONS
#include<stdlib.h>  //TO PERFORM CLEAR SCREEN OPERATIONS
#include<string.h>  //TO PERFORM STRING OPERATIONS
float num1, num2;
float ans;
double Ans;
char repeat = 'Y';
void main() {
    //DECLARATION OF VARIABLES
    char Operation[10];
    char chosen[10];
    int noOpP = 0;
    while(repeat == 'Y') {
        //DISPLAYING POSSIBLE OPERATIONS

        printf("\n\nPOSSIBLE OPERATIONS :\n\n* add(+), sub(-), mult(*), div(/)...");
        printf("\n\n* To round decimal digits :\n\tRound[to smallest...] : input roundS\n\tRound[to greatest...] input roundG\n\n* To find roots :\n\tSquare root : input square\n\tCube root: input cube\n\n* To find log :\n\tTo Base 10 : input logB\n\tTo Base e : input logE\n\n* To find absolute value : input absolute\n* To find power : input power\n* To find sin : input sin\n* To find Cos : input cos\n* To find Tan : input tan");
        printf("\n\nWhat would you like to do from above? ");
        //INPUT OF OPERATION TO BE PERFORMED
        fflush(stdin);
        gets(Operation);
        //LOOP TO DECIDE AS PER INPUT OF REQUIRED OPERATION
        //OPERATION TO COMPUTE SUMMATION OF 2 NUMBERS
        if((strcmp(Operation, strcpy(chosen, "add"))==0 )) {
            printf("\nEnter Two numbers :\n");
            scanf("%f%f", &num1, &num2);
            ans = num1 + num2;
            printf("The Sum  of %f and %f = %f", num1, num2, ans);
            noOpP = noOpP + 1;
        }
        //OPERATION TO COMPUTE DIFFERENCE OF 2 NUMBERS
        else if((strcmp(Operation, strcpy(chosen, "sub"))==0 )) {
            printf("\nEnter Two numbers :\n");
            scanf("%f%f", &num1, &num2);
            ans = num1 - num2;
            printf("The Subtraction of %f and %f = %f", num1, num2, ans);
            noOpP = noOpP + 1;
        }
        //OPERATION TO COMPUTE PRODUCT OF 2 NUMBERS
        else if((strcmp(Operation, strcpy(chosen, "mult"))==0 )) {
            printf("\nEnter Two numbers :\n");
            scanf("%f%f", &num1, &num2);
            ans = num1 * num2;
            printf("Multiplication of %f and %f = %f", num1, num2, ans);
            noOpP = noOpP + 1;
        }
        //OPERATION TO COMPUTE DIVISION OF 2 NUMBERS
        else if((strcmp(Operation, strcpy(chosen, "div"))==0 )) {
            printf("\nEnter Two numbers :\n");
            scanf("%f%f", &num1, &num2);
            ans = num1 / num2;
            printf("Division of %f and %f = %f", num1, num2, ans);
            noOpP = noOpP + 1;
        }
        //OPERATIONN TO COMPUTE ROUNDED VALUES UPTO SMALLEST VALUE
        else if((strcmp(Operation, strcpy(chosen, "roundS"))==0 )) {
            printf("\nEnter number  : ");
            scanf("%f", &num1);
            ans = ceil(num1);
            printf("Rounded digit of %f  = %f", num1, ans);
            noOpP = noOpP + 1;
        }
        //OPERATION TO COMPUTE ROUNDED VALUES UPTO GREATEST VALUE
        else if((strcmp(Operation, strcpy(chosen, "roundG"))==0 )) {
            printf("\nEnter number  : ");
            scanf("%f", &num1);
            ans = floor(num1);
            printf("Rounded digit of %f  = %f", num1, ans);
            noOpP = noOpP + 1;
        }
        //OPERATION TO COMPUTE SQUARE ROOTS
        else if((strcmp(Operation, strcpy(chosen, "square"))==0 )) {
            printf("\nEnter number  : ");
            scanf("%f", &num1);
            Ans = sqrt(num1);
            printf("Square of %f  = %lf", num1, Ans);
            noOpP = noOpP + 1;
        }
        //OPERATION TO COMPUTE CUBE  ROOTS
        else if((strcmp(Operation, strcpy(chosen, "cube"))==0 )) {
            printf("\nEnter number  : ");
            scanf("%f", &num1);
            Ans = cbrt(num1);
            printf("Cube of %f  = %lf", num1, Ans);
            noOpP = noOpP + 1;
        }
        //OPERATION TO COMPUTE POWER
        else if((strcmp(Operation, strcpy(chosen, "power"))==0 )) {
            printf("\nEnter the base number : ");
            scanf("%f", &num1);
            printf("Enter the  power to be raised to : ");
            scanf("%f", &num2);
            Ans = pow(num1, num2);
            printf("%f to power of %f = %lf", num1, num2, Ans);
            noOpP = noOpP + 1;
        }
        //OPERATION TO COMPUTE LOG TO BASE '10'
        else if((strcmp(Operation, strcpy(chosen, "logB"))==0 )) {
            printf("\nEnter number  : ");
            scanf("%f", &num1);
            Ans = log10(num1);
            printf("Log of %f(to base 10) = %lf", num1, Ans);
            noOpP = noOpP + 1;
        }
        //OPERATION TO COMPUTE LOG TO BASE 'e'
        else if((strcmp(Operation, strcpy(chosen, "logE"))==0 )) {
            printf("\nEnter number  : ");
            scanf("%f", &num1);
            Ans = log(num1);
            printf("Log of %f(to base e) = %lf", num1, Ans);
            noOpP = noOpP + 1;
        }
        //OPERATION TO COMPUTE SINE
        else if((strcmp(Operation, strcpy(chosen, "sin"))==0 )) {
            printf("\nEnter angle: ");
            scanf("%f", &num1);
            Ans = sin(num1);
            printf("Sin[Sine] of %f  = %lf", num1, Ans);
            noOpP = noOpP + 1;
        }
        //OPERATION TO COMPUTE COSINE
        else if((strcmp(Operation, strcpy(chosen, "cos"))==0 )) {
            printf("\nEnter angle : ");
            scanf("%f", &num1);
            Ans = cos(num1);
            printf("Cos[Cosine] of %f  = %lf", num1, Ans);
            noOpP = noOpP + 1;
        }
        //OPERATION TO COMPUTE TANGENT
        else if((strcmp(Operation, strcpy(chosen, "tan"))==0 )) {
            printf("\nEnter angle : ");
            scanf("%f", &num1);
            Ans = tan(num1);
            printf("Tan[Tangent] of %f  = %lf", num1, Ans);
            noOpP = noOpP + 1;
        }
        //DEFAULT OPERATION
        else {
            system("cls");
            printf("\nWrong input, please check and try again");
        }
        printf("\n\n\nAnything else ?\nInput 'Y'if you wish to perform any other operation : ");
        fflush(stdin);
        scanf("%c",&repeat);
        system("cls");
        //DISPLAYING NO. OF OPERATIONS PERFORMED (JUST TO KEEP A COUNT)
        printf("\n\t\t\t\t\t\t\t\t\t\tNo.[Op Prfmd] = %d ", noOpP);
    }
    //OUT OF WHILE LOOP(ENDING OF CALCULATRO)
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t** THANK YOU **");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
