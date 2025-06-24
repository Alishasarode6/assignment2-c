#include<stdio.h>
int main()
{
    int a,b,c, max,min;
    printf("enter 3 numbers to find maximum amd minimum :");
    scanf("%d%d%d", &a,&b,&c);

    max = (a >= b)?((a >= c)? a : c) : ((b >= c)? b : c);

    printf("\n %d id the maximum", max);
    min = (a <= b)?((a <= c)? a : c) :((b <= c)? b : c);
    printf("\n %d is the minimum", min);
    return 0;
}