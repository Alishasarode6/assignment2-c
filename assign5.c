#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d", &n);
     
    if (n % 5 == 0 && n %7 ==0)
    {
        printf("\n %d is divisible by both 5 and 7 :",n);
    }
    else 
    {
        printf("\n %d is not divisible by both 5 and 7 :",n);
    }
    
    if (n % 5 == 0)
    {
        if (n % 7 == 0)
        {
            printf("\n %d is divisible by both 5 and 7 :",n);
        }
        else
        {
            printf("\n %d is divisible by 5 but not by and 7 :",n);
        }
    }
    else 
    {
        printf("\n %d is divisible by both 5 and 7 :",n);
    }
    return 0;
    }
