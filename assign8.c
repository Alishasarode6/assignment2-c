#include<stdio.h>
int main()
{
    char ch;
    printf("enter a lowercase character :");
    scanf("%c", &ch);

    if (ch =='a' || ch =='e'|| ch =='i'|| ch =='o'||ch =='u')
        printf("%c is a vowel", ch);

    else
        printf("%c are so no vowel in your character", ch);

        return 0;
}