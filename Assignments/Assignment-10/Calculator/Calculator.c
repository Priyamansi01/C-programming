//WAP to create simple calculator using switch case.
#include"stdio.h"
#include"math.h"
int main()
{
    char option;
    float x,y,result;

    printf("\n\n\n\t\t\t\t\t\t   [---SIMPLE CALCULATOR---]\n");
    printf("\n\t\t\t\t-----------------------------------------------------------");
    printf("\n\t\t\t\t|\tA= ADDITION\t\t|\t D= DIVISION  \t  |\n\t\t\t\t-----------------------------------------------------------");
    printf("\n\t\t\t\t|\tB= SUBTRATION\t\t|\t E= REMAINDER  \t  |\n\t\t\t\t-----------------------------------------------------------");
    printf("\n\t\t\t\t|\tC= MULTIPLICATION \t|\t F= POWER  \t  |\n\t\t\t\t-----------------------------------------------------------");
    printf("\n\n\t\t\t\t-----------------------------------------------------------");
    printf("\n\t\t\t\t|\t\t\t\t\t\t\t  |");
    printf("\n\t\t\t\t\tCHOOSE ANY ONE LETTER TO PERFORM THE TASK : ");
    scanf("%c",&option);
    printf("\t\t\t\t|\t\t\t\t\t\t\t  |\n\t\t\t\t-----------------------------------------------------------");
    printf("\n\n\t\t\t\t-----------------------------------------------------------");
    switch(option)
        {
        case 'A':
            printf("\n\t\t\t\t|\tADDITION is the task you have selected.  \t  |");
            printf("\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\t\t\t\t\t\t\t  |");
            printf("\t\t\t\t\t\t\t\tEnter two value : ");
            scanf("%f%f",&x,&y);
            result=x+y;
            printf("\t\t\t\t|\t\t\t\t\t\t\t  |\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\tResult\t\t\t|\t%f  \t  |",result);
            printf("\n\t\t\t\t-----------------------------------------------------------");
            break;
         case 'B':
            printf("\n\t\t\t\t|\tSUBTRATION is the task you have selected.  \t  |");
            printf("\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\t\t\t\t\t\t\t  |");
            printf("\t\t\t\t\t\t\t\tEnter two value : ");
            scanf("%f%f",&x,&y);
            result=x-y;
            printf("\t\t\t\t|\t\t\t\t\t\t\t  |\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\tResult\t\t\t|\t%f  \t  |",result);
            printf("\n\t\t\t\t-----------------------------------------------------------");
             break;
         case 'C':
            printf("\n\t\t\t\t|\tMULTIPLICATION is the task you have selected.  \t  |");
            printf("\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\t\t\t\t\t\t\t  |");
            printf("\t\t\t\t\t\t\t\tEnter two value : ");
            scanf("%f%f",&x,&y);
            result=x*y;
            printf("\t\t\t\t|\t\t\t\t\t\t\t  |\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\tResult\t\t\t|\t%f  \t  |",result);
            printf("\n\t\t\t\t-----------------------------------------------------------");
             break;
         case 'D':
            printf("\n\t\t\t\t|\tDIVISION  is the task you have selected.  \t  |");
            printf("\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\t\t\t\t\t\t\t  |");
            printf("\t\t\t\t\t\t\t\tEnter two value : ");
            scanf("%f%f",&x,&y);
            result=x/y;
            printf("\t\t\t\t|\t\t\t\t\t\t\t  |\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\tResult\t\t\t|\t%f  \t  |",result);
            printf("\n\t\t\t\t-----------------------------------------------------------");
             break;
         case 'E':
            printf("\n\t\t\t\t|\tREMAINDER is the task you have selected. \t  |");
            printf("\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\t\t\t\t\t\t\t  |");
            printf("\t\t\t\t\t\t\t\tEnter two value : ");
            scanf("%f%f",&x,&y);
            result=(int)x %(int) y;
            printf("\t\t\t\t|\t\t\t\t\t\t\t  |\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\tResult\t\t\t|     \t    %d    \t  |",(int)result);
            printf("\n\t\t\t\t-----------------------------------------------------------");
             break;
         case 'F':
            printf("\n\t\t\t\t|\tPOWER is the task you have selected.  \t\t  |");
            printf("\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\t\t\t\t\t\t\t  |");
            printf("\t\t\t\t\t\t\t\tEnter two value : ");
            scanf("%f%f",&x,&y);
            result= pow(x,y);       //x=base and y=exponent
            printf("\t\t\t\t|\t\t\t\t\t\t\t  |\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\tResult\t\t\t|\t%f  \t  |", result);
            printf("\n\t\t\t\t-----------------------------------------------------------");
             break;
         default:
            printf("\n\t\t\t\t|\t\t\tINVALID(-_-) \t\t\t  |");
            printf("\n\t\t\t\t-----------------------------------------------------------");
        }
        printf("\n\n\n\t\t\t\tSuccessfully Executed....\n\n\n\n\n");
        return 0;
}
