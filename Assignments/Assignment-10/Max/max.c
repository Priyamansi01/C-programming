//WAP to find maximum number between two number using switch case.
#include"stdio.h"
int main()
{
int a,b;
    printf("\n\n\n\t\t\t---------------------------------------------------------------");
    printf("\n\t\t\t|--------------Maximum number between two number--------------|");
    printf("\n\t\t\t|-------------------------------------------------------------|");
    printf("\n\t\t\t\t\tEnter the two value :  ");
    scanf("%d%d",&a,&b);
    printf("\t\t\t|\t\t\t\t\t\t\t      |");
    printf("\n\t\t\t\t\t\t a=%d and b=%d ",a,b);
    printf("\n\t\t\t|-------------------------------------------------------------|");

    switch(a>b)
    {
        case 0:
            switch(a==b)
                {
                    case 0:
                        printf("\n\t\t\t|\t\t\t b is maximum. \t\t\t      |");
                        printf("\n\t\t\t---------------------------------------------------------------");
                        break;
                    case 1:
                        printf("\n\t\t\t|\t\t\t Same Number.  \t\t\t      |");
                        printf("\n\t\t\t---------------------------------------------------------------");
                        break;
                }
            break;
        case 1:
            printf("\n\t\t\t|\t\t\t a is maximum. \t\t\t      |");
            printf("\n\t\t\t---------------------------------------------------------------");
            break;

    }
    printf("\n\n\n\t\t\tSuccessfully Executed...\n\n\n");
    return 0;
}
