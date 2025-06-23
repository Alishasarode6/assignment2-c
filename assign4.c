#include<stdio.h>
int main()
{
    float cp, sp, profitorloss;

    printf("\nEnter cost price:");
    scanf("%f", &cp);

    printf("\nEnter selling price:");
    scanf("%f", &sp);

    if(sp > cp)
    {
        profitorloss = sp -cp;
        printf("profit of %.2f",profitorloss);
    }

    else if(sp < cp);
    {
        profitorloss = cp -sp;
        printf("profit of %.2f", profitorloss);

    }
    else
    {
        printf("NITHER PROFIT NOR LOSS !");

    }
    return 0;
    
}