//WAP to print day of week name using switch case.
#include"stdio.h"
int main()
{
int w;
    printf("\n\n\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t|\t      ---Input any week number as you like---      \t|");
    printf("\n\t\t-----------------------------------------------------------------\n");
    printf("\t\t|\t\t\t\t\t\t\t\t|\n");
    printf("\t\t\t     Enter one week number as you like :  ");
    scanf("%d",&w);
    printf("\t\t|\t\t\t\t\t\t\t\t|\n");
    printf("\t\t-----------------------------------------------------------------\n");
    switch(w)
        {
            case 1:
                printf("\t\t|\t\t\t     MONDAY      \t\t\t|\n");
                break;
            case 2:
                printf("\t\t|\t\t\t    TUESDAY      \t\t\t|\n");
                break;
            case 3:
                printf("\t\t|\t\t\t  WEDNESDAY      \t\t\t|\n");
                break;
            case 4:
                printf("\t\t|\t\t\t   THURSDAY      \t\t\t|\n");
                break;
            case 5:
                printf("\t\t|\t\t\t     FRIDAY      \t\t\t|\n");
                break;
            case 6:
                printf("\t\t|\t\t\t   SATURDAY      \t\t\t|\n");
                break;
            case 7:
                printf("\t\t|\t\t\t     SUNDAY      \t\t\t|\n");
                break;
            default:
                printf("\t\t|\t\t\t    INVALID      \t\t\t|\n");
        }
    printf("\t\t-----------------------------------------------------------------\n");
    printf("\n\n\n\t\tSuccessfully Executed...\n\n\n");
    return 0;
}
