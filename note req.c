//to count minimum number of note in a given amount
#include<stdio.h>
main()
{
    int amt,n2000,n500,n200,n100,n50,n20,n10,n5,n2,n1;
    printf("Enter the total Amount of Money:");
    scanf("%d",&amt);

    if (amt>=2000)
    {
        n2000=amt/2000;
        printf("No. of 2000 denominations= %d\n",n2000);
        amt=(amt-(2000*n2000));
    }
        if (amt>=500)
        {
            n500=amt/500;
            printf("No. of 500 denominations= %d\n",n500);
            amt=(amt-(500*n500));
        }
            if (amt>=200)
            {
               n200=amt/200;
               printf("No. of 200 denominations= %d\n",n200);
               amt=(amt-(200*n200));
            }
               if(amt>=100)
               {
                   n100=amt/100;
                   printf("No. of 100 denominations= %d\n",n100);
                   amt=(amt-(100*n100));
               }
                   if (amt>=50)
                   {
                       n50=amt/50;
                       printf("No. of 50 denominations= %d\n",n50);
                       amt=(amt-(50*n50));
                   }
                       if(amt>=20)
                       {
                           n20=amt/20;
                           printf("No. of 20 denominations= %d\n",n20);
                           amt=(amt-(20*n20));
                       }
                           if(amt>=10)
                           {
                               n10=amt/10;
                               printf("No. of 10 denominations= %d\n",n10);
                               amt=(amt-(10*n10));
                           }
                               if(amt>=5)
                               {
                                   n5=amt/5;
                                   printf("No. of 5 denominations= %d\n",n5);
                                   amt=(amt-(5*n5));
                               }
                                   if(amt>=2)
                                   {
                                       n2=amt/2;
                                       printf("No. of 2 denominations= %d\n",n2);
                                       amt=(amt-(2*n2));
                                   }
                                       if(amt>=1)
                                       {
                                           n1=amt/1;
                                           printf("No. of 1 denominations= %d\n",n1);
                                           amt=(amt-(1*n1));
                                       }

}
