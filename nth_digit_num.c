//nth digit of a num
#include<stdio.h>
main()
{
    int n,d,i,dig;
    printf("Enter number and place of digit:");
    scanf("%d%d",&n,&d);
    for(i=1;i<d;i++)
    {
        n=n/10;
    }
        dig=n%10;
        printf("Digit is: %d",dig);
}
