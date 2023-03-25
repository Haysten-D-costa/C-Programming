#include<stdio.h>
#include<stdlib.h>
int main() {
    int num, count = 1;
    char repeat = 'Y';
    do {
        printf("\n\t\t\t* Name : Haysten D'costa");
        printf("\n\t\t\t* Roll No. : 21CO56");
        printf("\n\t\t\t* Degree : BE in Computer Engineering");
        printf("\n\t\t\t* For more such webs, Go to www.haycodes.com");
        printf("\n\n\n\n\t\t\tPROGRAM : CHECK IF 'EVEN' OR 'ODD'");
        printf("\n\t\t\t**********************************************");
        printf("\n\t\t\tCount : %d", count++);
        printf("\n\n\n\n\t\t\tEnter number : ");
        scanf("%d", &num);
        printf("\n\t\t\t--> Number Entered = %d ", num);
        if(num %2 == 0) {
            printf("\n\t\t\t--> Number '%d' is an 'EVEN' number ", num);
        }
        else {
            printf("\n\t\t\t--> Number '%d' is an 'ODD' number ", num);
        }
        printf("\n\n\n\n\t\t\t**********************************************");
        printf("\n\n\n\t\t\tDo you want to try again ?[Y/N] : ");
        fflush(stdin);
        scanf("%c", &repeat);
        if(repeat == 'Y' || repeat == 'y') {
            system("cls");
        }
    }while(repeat == 'Y' || repeat == 'y');
    
    printf("\n\t\t\t\t\t\t\t     Thank You ");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
