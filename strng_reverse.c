//WAP to print a string in reverse order
//without using library function
#include<stdio.h>
void reverse(char []);
int main()
{
    char s[100];
    printf("Enter a string : ");
    gets(s);
    printf("Reverse string : ");
    reverse(s);
}
void reverse(char s[])
{
    int j,i;
    for(i=0;s[i]!='\0';i++);
    for(j=i-1;j>=0;j--)
        printf("%c",s[j]);
}
