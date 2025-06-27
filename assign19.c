#include<stdio.h>
int main()

{
    char ch;

    printf("enter a alphabete :");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("you've entered lowercase alphabets %c :", ch);
        ch = ch - 32;
        printf("\n after converting alphabate lower to uppercase :%c",ch);

    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("you've entered uppercase letter %c :",ch);
        ch = ch +32;
        printf("\n after converting alphabate upper to lowercase : %c",ch);
    }

    else
       printf("invalid inputs, please enter an alphabate or a word !!!");

       return 0;
}