//charges per unit
#include<stdio.h>
main()
{
    int unit;
    float chrg;
    printf("Number of units:");
    scanf("%d",&unit);
    if(unit>=0&&unit<=200)
        chrg=0.50*unit;
    else if(unit>200&&unit<=400)
        chrg=100+0.65*(unit-200);
    else if(unit>400&&unit<=600)
        chrg=230+0.80*(unit-400);
    else
        chrg=390+1*(unit-600);
    printf("charge is:%f",chrg);

}
