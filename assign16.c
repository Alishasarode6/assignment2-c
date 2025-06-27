#include<stdio.h>
#include<string.h>
int main()
{
    int roll;
    char sub1[100], sub2[100], sub3[300],name[100], grade[20];
    float m1, m2, m3, total, avg;

    printf("enter student detail \n");
    printf("enter roll no: \n");
    scanf("%d", &roll);

    printf("enter student name : \n");
    scanf("%s", &name);

    printf("enter subject 1 : \n");
    scanf("%s", &sub1);
    printf("enter subject 2 : \n");
    scanf("%s", &sub2);
    printf("enter subject 3 : \n");
    scanf("%s", &sub3);

    printf("enter marks 1 : \n");
    scanf("%f", &m1);
    printf("enter marks 2 : \n");
    scanf("%f", &m2);
    printf("enter marks 3 : \n");
    scanf("%f", &m3);

    total = m1 + m2 + m3;
    avg = total / 3;

    if (avg <= 100 && avg > 90)
       strcpy(grade , "CLASS-I");

     else if (avg < 90 && avg > 80)
       strcpy(grade , "CLASS-II");

       else if (avg < 80 && avg > 70)
       strcpy(grade , "CLASS-III");

       else if (avg < 70 && avg > 60)
       strcpy(grade , "CLASS-IV");

       else if (avg < 50 && avg >35)
       strcpy(grade , "CLASS-PASS");

       else
       strcpy(grade , "FAIL !!!");

       printf("roll no: %d", roll);
       printf("\n name: %s", name);

       printf("\n SUBJECT 1: %s", sub1);
       printf("\n SUBJECT 2: %s", sub2);
       printf("\n SUBJECT 3: %s", sub3);

       printf("\n MARKS 1: %.2f", m1);
       printf("\n MARKS 2: %.2f", m2);
       printf("\n MARKS 3: %.2f", m3);

       printf("\n TOTAL : %.2f", total);
       printf("\n AVERAGE :%.2f", avg);
       printf("\n GRADE : %s", grade);

       return 0;


}