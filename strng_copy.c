//copy a string
//#include<string.h>
#include<stdio.h>

main()
{
    char s_1[100],s_2[100];
    int i;
    printf("enter a string:\n");
    //scanf("%s",s_2);
    scanf("%[^\n]",s_2);
    for(i=0;s_2[i]!='\0';i++)
        s_1[i]=s_2[i];
        s_1[i]='\0';
        printf("after copying : %s",s_1);
        printf("\nno. of character = %d",i);
}
