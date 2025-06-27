#include<stdio.h>
int main()
{
    int days;
    float fine = 0;

    printf("enter number of late days :");
    scanf("%d", &days);

    if (days <= 5)
    fine = days * 1;
else if (days <= 10)
    fine = days * 2;
else
    fine = days *5;

    printf("\n late days %d", days);
    printf("\n late fees amount :%.2f",fine);

    return 0;
}
