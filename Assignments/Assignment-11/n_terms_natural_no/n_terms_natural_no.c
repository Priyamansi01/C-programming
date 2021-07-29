//WAP to find the sum of first 10 natural number.
#include"stdio.h"
int main()
{
int i,n=1,b,a[i],sum=0;
    printf("\n\n\n\t\t\t\t-----------------------------------------------------------------");
    printf("\n\t\t\t\t|\t   [Dispaly n terms natural no. and their sum]     \t|");
    printf("\n\t\t\t\t|---------------------------------------------------------------|");
    printf("\n\t\t\t\t|\t\t\t\t\t\t\t\t|");
    printf("\n\t\t\t\t\t\t\tENTER A VALUE : ");
    scanf("%d",&b);
    printf("\t\t\t\t|\t\t\t\t\t\t\t\t|\n\t\t\t\t|---------------------------------------------------------------|");
    printf("\t\t\t\t\t\t|\t\ta[i]\t\t|\t\tn\t\t|");
    printf("\n\t\t\t\t|---------------------------------------------------------------|");
    for(i=0;n<=b;i++)
    {
        printf("\n\t\t\t\t|\t\ta[%d]\t\t|\t\t%d\t\t|",i,n);
        sum=n+sum;
        n++;
    }
    printf("\n\t\t\t\t-----------------------------------------------------------------");
    printf("\n\t\t\t\t|\t\tSum\t\t|\t\t%d\t\t|",sum);
    printf("\n\t\t\t\t-----------------------------------------------------------------");
    printf("\n\n\n\t\t\t\tSuccessfully Executed....\n\n\n");
    return 0;
}
