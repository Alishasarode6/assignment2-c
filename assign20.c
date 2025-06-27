#include<stdio.h>
int main()
{
    char ch;
    printf("enter something :");
    scanf("%c", &ch);

    if (ch >= '0' && ch<= '9')
    printf("you entered a digit :%c", ch);

    else if (ch >= 'a' && ch <= 'z')
    printf("you've entered a lowercase alphabate %c :", ch);

    else if (ch >= 'A' && ch <= 'Z')
    printf("you've entered uppercase letter %c:",ch);

    else
       printf("invalid inpust, please enter an alphabate or a word !!!");

       return 0;
}