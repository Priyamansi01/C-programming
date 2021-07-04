//Swap two numbers.
#include"stdio.h"
main()
{
int a=12,b=34;

    printf("\n\n\t\t\tSwapping Between Two Number.");
    printf("\n\t\t\t---------------------------");

    printf("\n\n\t\tBefore Swap:");
    printf("\n\t\t------------");

    printf("\n\n\t\tFirst Number= %d\t Second Number= %d",a,b);

    printf("\n\n\t\tAfter Swap:");
    printf("\n\t\t------------");

        a=a+b;
        b=a-b;
        a=a-b;

    printf("\n\n\t\tFirst Number= %d\t Second Number= %d",a,b);
    printf("\n\n\n\t\t\tSuccessfully Executed...\n\n");
return 0;
}
