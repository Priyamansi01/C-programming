//Check whether no. divisible by 5 and 11 or not.
#include"stdio.h"
int main()
{
int a;
    printf("\n\n\n\t\t\t-------------------------------------------------\n");
    printf("\t\t\t| Check whether no.divisible by 5 and 11 or not |\n");
    printf("\t\t\t-------------------------------------------------\n");
    printf("\t\t\t|                                               |\n");
    printf("\t\t\t\t Enter the value :");
    scanf("%d",&a);
    if(a%5==0 && a%11==0)
        {
            printf("\t\t\t|                                               |\n");
            printf("\t\t\t\t %d is divisible by 5 and 11.       ",a);
        }

    else
        {
            printf("\t\t\t|                                               |\n");
            printf("\t\t\t\t %d is not divisible by 5 and 11.   ",a);
        }
    printf("\n\t\t\t|                                               |\n");
    printf("\t\t\t-------------------------------------------------\n");
    printf("\n\n\t\t\tSuccessfully Executed..\n\n");
    return 0;
}
