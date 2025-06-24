#include<stdio.h>
int main()
{
    float x,y;
    printf("enter x & y co-ordinates :");
    scanf("%f%f", &x,&y);

    if (x == 0 && y == 0)
    printf("\n the point is at origin it self ");

    else if (x > 0 && y > 0)
      printf("\n the point lies in quadrant-I");

    else if (x < 0 && y > 0)
      printf("\n the point lies in quadrant-II");

    else if (x < 0 && y > 0)
       printf("\n the point lies in quadrant-III");

    else if (x > 0 && y < 0)
      printf("\n the point lies in quadrant-IV");

    else if (x == 0)
       printf("\n the point lies on y-axis");

       else
          printf("\n the point lies on x-axis");

          return 0;
}