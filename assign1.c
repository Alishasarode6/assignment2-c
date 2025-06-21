#include<stdio.h>
int main()

{
    int num ;
    printf("Enter a number");
    scanf("%d", num);

    if (num > 0)
    printf("is positive number");

else if (num < 0)
printf("is negative number");

else
printf("is a zero");

return 0;


}