//WAP to copy one string to another
//using user defined function
#include<stdio.h>
void copy(char []);
main()
{
    char s1[100];
    printf("enter a string:");
    scanf("%[^\n]",s1);
    copy(s1);
}
void copy(char s_1[100])
{
    int i,s_2[100];
    for(i=0;s_1[i]!='\0';i++)
        s_2[i]=s_1[i];
        //s_2[i]='\0';
        printf("after copying :%s",s_1);
        //printf("\nno. of character = %d",i);
}
