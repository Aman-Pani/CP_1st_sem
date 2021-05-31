//string is sub string of another
#include<stdio.h>
int sub(char [],char []);
main()
{
    char s[100],ss[100],count;
    printf("Enter a string : ");
    gets(s);
    printf("Enter other string : ");
    gets(ss);
    count=sub(s,ss);
    if(count)
    {
        printf("2nd string is a substring of 1st.\n");
        printf("Occurrence = %d",count);
    }
    else
        printf("2nd string is not a substring of 1st.");
}
int sub(char s[],char ss[])
{
    int i,j,t=0,L1,L2,count=0;
    for(L1=0;s[L1]!='\0';L1++);
    for(L2=0;ss[L2]!='\0';L2++);
    for(i=0;i<=L1-L2;i++)
        if(s[i]==ss[0])
        {
            t=0;
            for(j=1;j<L2;j++)
                if(ss[j]!=s[i+j])
                {
                    t++;
                    break;
                }
            if(t==0)
                count++;
        }
    return count;
}
