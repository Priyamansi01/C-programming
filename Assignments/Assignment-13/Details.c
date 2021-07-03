//Details
#include"stdio.h"
int main()
{
char n1[10],n2[10], n3[10], add[90], e[100], dob[20];
double pn;

printf("\n\tEnter your details:\n");

        printf("\nEnter your Name :");
        scanf("%s%s%s",&n1,&n2,&n3);
        printf("Enter your Address :");
        scanf("%s",&add);
        printf("Enter your Phone no. :");
        scanf("%zu",&pn);
        printf("Enter your DOB :");
        scanf("%s",&dob);
        printf("Enter your e-mail id :");
        scanf("%s", &e);

printf("\n\tYour Info :\n");

        printf("\nYour Name :%s %s %s", n1,n2,n3);
        printf("\nYour Address :%s", add);
        printf("\nYour Phone no. :%zu", pn);
        printf("\nYour DOB :%s", dob);
        printf("\nYour e-mail id :%s", e);

        printf("\n\n\nSuccessfully Executed...\n\n");
        return 0;
}
