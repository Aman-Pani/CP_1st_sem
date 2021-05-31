//WAP to find string length without using
//library function
#include<stdio.h>
int len(char []);
int main()
{
    char s[100];
    printf("Enter a string :");
    gets(s);
    printf("Length = %d",len(s));
}
int len(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}
