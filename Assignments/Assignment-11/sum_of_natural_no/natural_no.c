//WAP to find the sum of first 10 natural number.
#include"stdio.h"
int main()
{
int i,n=1,b=10,a[10],sum=0;
    printf("\n\n\n\t\t\t\t---------------------------------");
    printf("\n\t\t\t\t| [Sum of first 10 natural no.] |");
    printf("\n\t\t\t\t|-------------------------------|");
    printf("\n\t\t\t\t|\ta[i]\t|\tn\t|");
    printf("\n\t\t\t\t|-------------------------------|");
    for(i=0;n<=b;i++)
    {
        printf("\n\t\t\t\t|\ta[%d]\t|\t%d\t|",i,n);
        sum=n+sum;
        n++;
    }
    printf("\n\t\t\t\t---------------------------------");
    printf("\n\t\t\t\t|\tSum\t|\t%d\t|",sum);
    printf("\n\t\t\t\t---------------------------------");
    printf("\n\n\t\t\t\tSuccessfully Executed....\n\n\n");
    return 0;
}
