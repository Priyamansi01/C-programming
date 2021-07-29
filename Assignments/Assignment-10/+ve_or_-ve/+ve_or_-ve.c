//WAP to check whether a no. is positive, negative or zero using switch case.
#include"stdio.h"
int main()
{
int n;
     printf("\n\n\n\t\t\t-----------------------------------------------------------------");
     printf("\n\t\t\t|\t    Check whether a no. is positive or negative    \t|");
     printf("\n\t\t\t-----------------------------------------------------------------");
     printf("\n\t\t\t\t\t\tEnter a value :  ");
     scanf("%d",&n);
     printf("\t\t\t-----------------------------------------------------------------");
     switch(n>0)
        {
            case 0:
                switch(n==0)
                    {
                        case 0:
                            printf("\n\t\t\t|\t\t\t     %d is -ve.   \t\t\t|",n);
                            printf("\n\t\t\t-----------------------------------------------------------------");
                            break;
                        case 1:
                            printf("\n\t\t\t|\t\t\t     %d is zero.  \t\t\t|",n);
                            printf("\n\t\t\t-----------------------------------------------------------------");
                            break;
                    }
                break;
            case 1:
                printf("\n\t\t\t|\t\t\t     %d is +ve.  \t\t\t|",n);
                printf("\n\t\t\t-----------------------------------------------------------------");
                break;
        }
    printf("\n\n\n\t\t\tSuccessfully Executed...\n\n\n");
    return 0;
}


