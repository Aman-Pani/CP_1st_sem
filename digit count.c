//count repeatation of digits of a number
#include<stdio.h>
main()
{
    int n,i,x,a[10]={0,0,0,0,0,0,0,0,0,0};
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        a[x]++;
        n=n/10;
    }
    printf("repeatation : \n");
    for(i=0;i<10;i++)
        printf("%d -> %d times\n",i,a[i]);
}
