// Find maximum between two number
#include"stdio.h"
int main()
{
    int a,b;
    printf("\n\n\t\t\tFind maximum between two numbers\n");
    printf("\t\t\t--------------------------------\n");

    printf("\n\n\t\tEnter the value of 'a' and 'b':\t");
    scanf("%d%d",&a,&b);

    if(a>b)
            printf("\n\n\t\t%d is maximum between %d and %d",a,a,b);
    else
            printf("\n\n\t\t%d is maximum between %d and %d",b,a,b);
    printf("\n\n\n\t\tSuccessfully Executed...\n\n\n");
    return 0;
}
