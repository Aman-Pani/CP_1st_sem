//numbers divisible by the sum of its digits
#include<stdio.h>
main()
{
    int i,n,sum;//rng
    //printf("Enter range:");
    //scanf("%d",&rng);
    for(i=1;i<=10000;i++)
    {
        sum=0;
        n=i;
        while(n!=0)
        {
            sum=sum+n%10;
            n=n/10; //terminating statement
        }
        if(i%sum==0)
            printf("%d\t",i);
    }
}





