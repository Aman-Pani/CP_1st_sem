//WAP to check whether a given character
//is present in a string or not.
#include<stdio.h>
int present(char [],char);
void main()
{
    char s[80],ch;
    printf("Enter string : ");
    gets(s);
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(present(s,ch))
        printf("Character is present.");
    else
        printf("Character is absent.");
}
int present(char s[],char ch)
{
    int i;
    for(i=0;s[i]!='\0';i++)
        if(s[i]==ch)
            return 1;
    return 0;
}
