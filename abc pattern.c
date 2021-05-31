//A BB CCC pattern
#include<stdio.h>
main()
{
    //char c='A';
    int i,j,row,x=0,space;
    printf("Enter no. of rows:");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(space=1;space<=row-i;space++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%c ",65+x);  // ...

            printf("\n");
            x++;
    }
}
