#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers(a,b,c) :");
    scanf("%d%d%d", &a,&b,&c);

    if ((a>b && a<c) || (a>c && a<b))
       printf("\n %dis between %d and %d", a,b,c);

    else
       printf("\n %d is not between %d and %d", a,b,c);

       return 0;
}