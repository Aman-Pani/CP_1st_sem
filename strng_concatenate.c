//WAP to concatenate two string and store in
//another without using library function.
#include<stdio.h>
void concat(char [],char []);
int main()
{
    char s1[100],s2[100];
    printf("1st string : ");
    scanf(" %[^\n]",s1);
    printf("2st string : ");
    scanf(" %[^\n]",s2);
    concat(s1,s2);
    return 0;
}
void concat(char s1[],char s2[])
{
    char s[20];
    int i,j;
    for(i=0;s1[i]!='\0';i++)
        s[i]=s1[i];
    s[i++]=' ';
    for(j=0;s2[j]!='\0';j++)
        s[i+j]=s2[j];
    s[i+j]='\0';
    printf("concatenate string is : %s",s);
}
