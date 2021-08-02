//WAP to create simple calculator using switch case.
#include"stdio.h"
#include"math.h"
#include"stdlib.h"
int main()
{
    char l;
    int option,dummy;
    float x,y,result;
    do{
        system("cls");
        printf("\n\n\n\t\t\t\t\t\t   [---SIMPLE CALCULATOR---]\n");
        printf("\n\t\t\t\t-----------------------------------------------------------");
        printf("\n\t\t\t\t|\t1= ADDITION\t\t|\t 4= DIVISION  \t  |\n\t\t\t\t-----------------------------------------------------------");
        printf("\n\t\t\t\t|\t2= SUBTRATION\t\t|\t 5= REMAINDER  \t  |\n\t\t\t\t-----------------------------------------------------------");
        printf("\n\t\t\t\t|\t3= MULTIPLICATION \t|\t 6= POWER  \t  |\n\t\t\t\t-----------------------------------------------------------");
        printf("\n\n\t\t\t\t-----------------------------------------------------------");
        printf("\n\t\t\t\t|\t\t\t\t\t\t\t  |");
        printf("\n\t\t\t\t\tCHOOSE ANY ONE LETTER TO PERFORM THE TASK : ");
        scanf("%d",&option);
        printf("\n\t\t\t\t|\t\t\t\t\t\t\t  |\n\t\t\t\t-----------------------------------------------------------");
        printf("\n\n\t\t\t\t-----------------------------------------------------------");
        switch(option)
            {
            case 1:
                printf("\n\t\t\t\t|\tADDITION is the task you have selected.  \t  |");
                printf("\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\t\t\t\t\t\t\t  |");
                printf("\t\t\t\t\t\t\t\t\t\tEnter two value : ");
                scanf("%f%f",&x,&y);
                result=x+y;
                printf("\t\t\t\t|\t\t\t\t\t\t\t  |\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\tResult\t\t\t|\t%f  \t  |",result);
                printf("\n\t\t\t\t-----------------------------------------------------------");
                break;
            case 2:
                printf("\n\t\t\t\t|\tSUBTRATION is the task you have selected.  \t  |");
                printf("\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\t\t\t\t\t\t\t  |");
                printf("\t\t\t\t\t\t\t\t\t\tEnter two value : ");
                scanf("%f%f",&x,&y);
                result=x-y;
                printf("\t\t\t\t|\t\t\t\t\t\t\t  |\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\tResult\t\t\t|\t%f  \t  |",result);
                printf("\n\t\t\t\t-----------------------------------------------------------");
                break;
            case 3:
                printf("\n\t\t\t\t|\tMULTIPLICATION is the task you have selected.  \t  |");
                printf("\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\t\t\t\t\t\t\t  |");
                printf("\t\t\t\t\t\t\t\t\t\tEnter two value : ");
                scanf("%f%f",&x,&y);
                result=x*y;
                printf("\t\t\t\t|\t\t\t\t\t\t\t  |\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\tResult\t\t\t|\t%f  \t  |",result);
                printf("\n\t\t\t\t-----------------------------------------------------------");
                break;
            case 4:
                printf("\n\t\t\t\t|\tDIVISION  is the task you have selected.  \t  |");
                printf("\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\t\t\t\t\t\t\t  |");
                printf("\t\t\t\t\t\t\t\t\t\tEnter two value : ");
                scanf("%f%f",&x,&y);
                result=x/y;
                printf("\t\t\t\t|\t\t\t\t\t\t\t  |\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\tResult\t\t\t|\t%f  \t  |",result);
                printf("\n\t\t\t\t-----------------------------------------------------------");
                break;
            case 5:
                printf("\n\t\t\t\t|\tREMAINDER is the task you have selected. \t  |");
                printf("\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\t\t\t\t\t\t\t  |");
                printf("\t\t\t\t\t\t\t\t\t\tEnter two value : ");
                scanf("%f%f",&x,&y);
                result=(int)x%(int)y;
                printf("\t\t\t\t|\t\t\t\t\t\t\t  |\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\tResult\t\t\t|     \t    %d    \t  |",(int)result);
                printf("\n\t\t\t\t-----------------------------------------------------------");
                break;
            case 6:
                printf("\n\t\t\t\t|\tPOWER is the task you have selected.  \t\t  |");
                printf("\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\t\t\t\t\t\t\t  |");
                printf("\t\t\t\t\t\t\t\t\t\tEnter two value : ");
                scanf("%f%f",&x,&y);
                result= pow(x,y);       //x=base and y=exponent
                printf("\t\t\t\t|\t\t\t\t\t\t\t  |\n\t\t\t\t-----------------------------------------------------------\n\t\t\t\t|\tResult\t\t\t|\t%f  \t  |", result);
                printf("\n\t\t\t\t-----------------------------------------------------------");
                break;
            default:
                printf("\n\t\t\t\t|\t\t\tINVALID(-_-) \t\t\t  |");
                printf("\n\t\t\t\t-----------------------------------------------------------");
            }
        printf("\n\n\t\t\t\t\t Do you want to calculate again ?(y/n): ");
        scanf("%d",&dummy);
        scanf("%c",&l);
        }while(l=='y');
        printf("\n\n\n\t\t\t\tSuccessfully Executed....\n\n\n\n\n");
        return 0;
}
