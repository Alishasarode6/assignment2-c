#include<stdio.h>
int main()
{
    int h,m,s;
    printf("enter time= HH:MM:SS :");
    scanf("%d%d%d", &h,&m,&s);

    if (h >= 0 && h <= 24)
    {
        if (m >= 0 && m <= 60)
        {
            if (s >= 0 && s <= 60)
            {
                printf("\n time is valid :%02d:%02d:02d",h,m,s);
            }
            else
                printf("\n invalid seconds !!!");
        }
        else
              printf("\n invalid minutes !!!");
    }
    else
        printf("\n invalid hours !!!");

        return 0;
}