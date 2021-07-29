//Check whether a year is leap year or not.
#include"stdio.h"
int main()
{
 int y;
    printf("\n\n\t\t\tCheck whether a year is leap year or not.\n");
    printf("\t\t\t-----------------------------------------\n");

    printf("\n\n\t\tEnter a year:\t");
    scanf("%d",&y);

    if(y%4==0 || y%100!=0 && y%400==0)
            printf("\n\n\t\t%d is a leap year",y);
    else
            printf("\n\n\t\t%d is not a leap year",y);
    printf("\n\n\n\t\tSuccessfully Executed...\n\n\n");
    return 0;
}
