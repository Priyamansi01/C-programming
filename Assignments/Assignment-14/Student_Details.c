//Student Details
#include"stdio.h"
main()
{
    char n1[10],n2[10],n3[10],r[15],p[10];
    char email[35];

    printf("\n\n\t\t\tEnter Student Details:\n");
    printf("\t\t\t----------------------");

    printf("\n\tEnter Student Name \t:");
    scanf("%s%s%s",&n1,&n2,&n3);
    printf("\n\tEnter Student Reg.no \t:");
    scanf("%s",&r);
    printf("\n\tEnter Student e-mail id :");
    scanf("%s",email);
    printf("\n\tEnter Student Phone.no \t:");
    scanf("%s",&p);

    printf("\n\n\t\t\tStudent Details:\n");
    printf("\t\t\t---------------");

    printf("\n\tStudent Name\t : %s %s %s",n1,n2,n3);
    printf("\n\tStudent Reg.no\t : %s",r);
    printf("\n\tStudent e-mail id: %s",email);
    printf("\n\tStudent Phone.no : %s",p);

    printf("\n\n\nSuccessfully Executed...\n\n");
    return 0;
}
