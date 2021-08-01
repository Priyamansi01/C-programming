//WAP to display the multiplication table of a given integer.
#include"stdio.h"
int main()
{
char waste;
int i=0,n,b=1,a[i],sum=0;
    printf("\n\n\n\t\t\t\t-----------------------------------------------------------------");
    printf("\n\t\t\t\t|     [Display the multiplication table of a given integer]\t|");
    printf("\n\t\t\t\t|---------------------------------------------------------------|");
    printf("\n\t\t\t\t|\t\t\t\t\t\t\t\t|");
    printf("\n\t\t\t\t\t\t\tENTER A VALUE : ");
    scanf("%d",&n);
    scanf("%c",&waste);
    printf("\t\t\t\t|\t\t\t\t\t\t\t\t|\n\t\t\t\t|---------------------------------------------------------------|");
    printf("\t\t\t\t\t\t|\ta[i]\t   |\t\t   Table of %d\t\t\t|",n);
    printf("\n\t\t\t\t|---------------------------------------------------------------|");
    while(b<=10)
    {
        printf("\n\t\t\t\t|\ta[%d]\t   |\t       %d * %d \t=\t %d \t\t|",i,n,b,n*b);
        i++;
        b++;
    }
    printf("\n\t\t\t\t-----------------------------------------------------------------");
    printf("\n\n\n\t\t\t\tSuccessfully Executed....\n\n\n");
    return 0;
}
