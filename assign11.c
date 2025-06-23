#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 number to compare them :");
    scanf("%d%d", &a,&b);
 if (a == b)
     printf("\n %d %d are equal :", a,b);

 else if (a > b)
     printf("\n %d is greater than %d :", a,b);

 else if (a < b)
     printf("\n %d is less than %d :", a,b);

     return 0;
}