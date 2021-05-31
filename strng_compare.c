//WAP to compare two strings without using
//library function
#include<stdio.h>
int compare(char [],char []);
int main()
{
    char s1[10],s2[10];
    printf("1st string : ");
    gets(s1);
    printf("2nd string : ");
    gets(s2);
    if(compare(s1,s2))
        printf("Two strings are same.");
    else
        printf("Two strings are not same.");
    return 0;
}
int compare(char s1[],char s2[])
{
    int i=0,f=1;
    while(s1[i]!='\0')
    {
        if(s1[i]!=s2[i])
        {
            f=0;
            break;
        }
        i++;
    }
    if(s1[i]!=s2[i])
        f=0;
    return f;
}



