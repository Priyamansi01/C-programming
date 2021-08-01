//WAP to display the cube of the number up to given an integer.
#include"stdio.h"
int main()
{
char waste;
int i=0,n=1,b,a[i],sum=0;
    printf("\n\n\n\t\t\t\t-----------------------------------------------------------------");
    printf("\n\t\t\t\t|     [Display the cube of the number up to given integer.]\t|");
    printf("\n\t\t\t\t|---------------------------------------------------------------|");
    printf("\n\t\t\t\t|\t\t\t\t\t\t\t\t|");
    printf("\n\t\t\t\t\t\t\tENTER A VALUE : ");
    scanf("%d",&b);
    scanf("%c",&waste);
    printf("\t\t\t\t|\t\t\t\t\t\t\t\t|\n\t\t\t\t|---------------------------------------------------------------|");
    printf("\t\t\t\t\t\t|\ta[i]\t|\tn\t|\t   Cube of n       \t|");
    printf("\n\t\t\t\t|---------------------------------------------------------------|");
    while(n<=b)
    {
        printf("\n\t\t\t\t|\ta[%d]\t|\t%d\t|\t\t%d\t\t|",i,n,n*n*n);
        i++;
        n++;
    }
    printf("\n\t\t\t\t-----------------------------------------------------------------");
    printf("\n\n\n\t\t\t\tSuccessfully Executed....\n\n\n");
    return 0;
}
