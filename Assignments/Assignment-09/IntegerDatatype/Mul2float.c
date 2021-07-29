//WAP to multiplication 2 float number and display its result in integer data type.
#include"stdio.h"
int main()
{
    float a,b;
    printf("\n\n\t\t\t---------------------------------------------------------------------------\n");
    printf("\t\t\t|Multiplication 2 float number and display its result in integer data type|\n\t\t\t---------------------------------------------------------------------------\n");
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t  |\n");
    printf("\t\t\t\t\tEnter the value of 'a' and 'b':");
    scanf("%f%f",&a,&b);
    int mul=(int)a*(int)b;
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t  |\n");
    printf("\t\t\t\t\ta=%f, b=%f \n\t\t\t|\t\t\t\t\t\t\t\t\t  |\n\t\t\t\t\tmul=%d\n",a,b,mul);
    printf("\t\t\t|\t\t\t\t\t\t\t\t\t  |\n\t\t\t---------------------------------------------------------------------------\n");

    printf("\n\nSuccessfully Executed...\n\n");
    return 0;
}
