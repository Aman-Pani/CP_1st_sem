#include<stdio.h>
main()
{
    char s_1[100],s_2[100],s_3[100];
    int i,j;
    printf("enter string.1 : ");
    scanf("%[^\n]",s_1);
    printf("enter string.2 : ");
    scanf(" %[^\n]",s_2);
    for(i=0;s_1[i]!='\0';i++)
        s_3[i]=s_1[i];
        s_3[i++]=' ';
    for(j=0;s_2[j]!='\0';j++,i++)
        s_3[i]=s_2[j];
        s_3[i]='\0';
        printf("after concating : %s",s_3);
}
