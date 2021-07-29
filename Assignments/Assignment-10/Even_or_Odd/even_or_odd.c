//WAP to check whether a no. is odd or even using switch case.
#include"stdio.h"
int main()
{
int n;
     printf("\n\n\n\t\t\t-----------------------------------------------------------------");
     printf("\n\t\t\t|\t\tCheck whether a no. is odd or even.\t\t|");
     printf("\n\t\t\t-----------------------------------------------------------------");
     printf("\n\t\t\t\t\t\tEnter a value :  ");
     scanf("%d",&n);
     printf("\t\t\t-----------------------------------------------------------------");
     switch(n%2==0)
        {
            case 0:
                printf("\n\t\t\t|\t\t\t     %d is odd.   \t\t\t|",n);
                printf("\n\t\t\t-----------------------------------------------------------------");
                break;
            case 1:
                printf("\n\t\t\t|\t\t\t     %d is even.  \t\t\t|",n);
                printf("\n\t\t\t-----------------------------------------------------------------");
                break;
        }
    printf("\n\n\n\t\t\tSuccessfully Executed...\n\n\n");
    return 0;
}
