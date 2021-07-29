//WAP to input marks of five subjects.
#include"stdio.h"
int main()
{
float p,ch,b,m,co,per;
    printf("\n\n\n\t ---------------------------------------------------------\n");
    printf("\t |\t      Input marks of five subject\t\t |\n");
    printf("\t ---------------------------------------------------------\n");
    printf("\t |                                                       |");
    printf("\n\t\t    Enter the mark of Physics  \t  :");
    scanf("%f",&p);
    printf("\t |                                                       |");
    printf("\n\t\t    Enter the mark of Chemistry   :");
    scanf("%f",&ch);
    printf("\t |                                                       |");
    printf("\n\t\t    Enter the mark of Biology  \t  :");
    scanf("%f",&b);
    printf("\t |                                                       |");
    printf("\n\t\t    Enter the mark of Mathematics :");
    scanf("%f",&m);
    printf("\t |                                                       |");
    printf("\n\t\t    Enter the mark of Computer \t  :");
    scanf("%f",&co);
    printf("\t |                                                       |");

    printf("\n\t ---------------------------------------------------------\n");

    per=(p+ch+b+m+co)/500*100;

    printf("\n\t |\t    Percentage of five subject \t:%f \t |\n",per);
    printf("\n\t ---------------------------------------------------------\n");
    if(per>0 && per<100)
    {
     if(per>= 90 && per<=100)
        {
            printf("\n\t |\t    Congratulations! You get Grade 'A'\t\t |\n");
        }
     else if(per>=80&& per<=100)
        {
            printf("\n\t |\t    Congratulations! You get Grade 'B'\t\t |\n");
        }
     else if(per>=70 && per<=100)
        {
            printf("\n\t |\t    Congratulations! You get Grade 'C'\t\t |\n");
        }
     else if(per>=60 && per<=100)
        {
            printf("\n\t |\t    Congratulations! You get Grade 'D'\t\t |\n");
        }
     else if(per>=40 && per<=100)
        {
            printf("\n\t |\t    Congratulations! You get Grade 'E'\t\t |\n");
        }
     else if(per<40 && per<=100)
        {
            printf("\n\t |\t    Do well! You get Grade 'F'\t\t\t |\n");
        }
     else
        {
            printf("\n\t |\t\t\t   Error       \t\t\t |\n");
        }
    }
    else
            printf("\n\t |\t\t\t   Error       \t\t\t |\n");
    printf("\n\t ---------------------------------------------------------\n");
    printf("\n\n\t\tSuccessfully Executed...\n\n");
    return 0;

}
