//Volume of a Cylinder
#include"stdio.h"
int main()
{
    float r,h,v,pi=3.14;
    printf("\n\n\n\t\t\tVolume of a Cylinder\n");
    printf("\t\t\t--------------------\n");

    printf("\n\t\tEnter the value of radius and height:");
    scanf("%f%f",&r,&h);
    v=pi*r*r*h;
    printf("\n\n\t\tVolume of a Cylinder is %f\n",v);
    printf("\n\n\n\tSuccessfully Executed...\n\n\n");
    return 0;
}
