//Student Details
#include"stdio.h"
main()
{
    char n[50], r[15], e[60], p[10];

    printf("\n\n\t\t\tEnter Student Details:");
    printf("\t\t\t------------------------");

    printf("\n\tEnter Student Name \t:");
    scanf("%s",&n);
    printf("\n\tEnter Student Reg.no \t:");
    scanf("%s",&r);
    printf("\n\tEnter Student e-mail id \t:");
    scanf("%s",&e);
    printf("\n\tEnter Student Phone.no \t:");
    scanf("%s",&p);

    printf("\n\n\t\t\tStudent Details:");
    printf("\t\t\t---------------");

    printf("\n\tStudent Name\t:%s",n);
    printf("\n\tStudent Reg.no\t:%s",r);
    printf("\n\tStudent e-mail id\t:%s",e);
    printf("\n\tStudent Phone.no\t:%s",p);

    printf("\n\n\nSuccessfully Executed...\n\n");
    return 0;
}