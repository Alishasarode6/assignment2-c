#include<stdio.h>
int main()
{
    int  n;

    printf("enter a number :");
    scanf("%d", &n);

    if (n % 5 == 0 || n % 7 == 0)
    {
        printf("\n %d is divisible by 5 or 7 :",n);
    }
    else
    {
        printf("\n %d is not divisible by 5 or 7 :",n);
    }

    if (n % 5 == 0)
       printf("\n %d is divisible 5 :",n);

    else if (n % 7 == 0)
       printf("\n %d is divible 7:",n);

    else
       printf("\n %d is not divisible by both 5 and 7 :",n);

       return 0;
        
}