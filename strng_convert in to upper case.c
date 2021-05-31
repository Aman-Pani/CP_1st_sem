//WAP to convert a given string into upper case if it is in lower case
#include<stdio.h>
//#include<ctype.h>
void upper(char []);
void main()
{
    char s[80];
    printf("Enter a string : ");
    gets(s);
    upper(s);
}
void upper(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++)
        s[i]=toupper(s[i]);
        printf("upper case string :");
    puts(s);
}

