//vowel or consonant
#include<stdio.h>
main()
{
    char cha;
    printf("Enter latter: ");
    scanf("%c",&cha);
    switch(cha)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("vowel");
        break;
    default:
        printf("consonant");
    }
}
