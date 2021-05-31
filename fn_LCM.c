//LCM of 2 given numbers
#include<stdio.h>
void LCM(int,int);
int main()
{
    int m,n;
    printf("Enter two number : ");
    scanf("%d%d",&m,&n);
    LCM(m,n);
    return 0;
}
void LCM(int x,int y)
{
    int lcm;
    lcm=x>y?x:y;
    while(lcm%x!=0 || lcm%y!=0)
        {
            lcm++;
        }
    printf("The LCM is : %d",lcm);
}
