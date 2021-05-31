//WAP to check whether the given
//string is palindrome or not
#include<stdio.h>
int palindrome(char []);
void main()
{
    char s[100];
    printf("Enter string :");
    gets(s);
    if(palindrome(s))
        printf("String is a palindrome.");
    else
        printf("String is not a palindrome.");
}
int palindrome(char s[])
{
    int j,i,f=1;
    for(j=0;s[j]!='\0';j++);
    for(i=0;i<j/2;i++)
        if(s[i]!=s[j-1-i])
        {
            f=0;
            break;
        }
    return f;
}
