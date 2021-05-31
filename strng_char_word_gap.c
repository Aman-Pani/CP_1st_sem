//WAP to find no of characters, words and blank spaces
//using user defined function
//#include<stdio.h>
//#include<ctype.h>
//void count(char []);
//int main()
//{
//    char s[80];
//    printf("Enter a string : ");
//    gets(s);
 //   count(s);
  //  return 0;
//}

//void count(char s[])
//{
  //  int i,words,spaces,chars;
    //for(i=0;s[i]!='\0';i++)
    //{
      //  if(s[i]==' ')
        //    spaces++;
        //chars++;
        //if(isalpha(s[i]) && isalpha(s[i+1]) && isalpha(s[i+2]))
          //  words++;
    //}
    //printf("Characters= %d\nWords= %d\nSpaces= %d",chars,words,spaces);
//}
#include <stdio.h>
//#include <string.h>

void count(char[]);
int main()
{
    char s[20];

    printf("Enter a string : ");
    scanf("%[^\n]", s);
    count(s);

    return 0;
}

void count(char s[])
{
    int i, len, c = 0;

    for (len = 0; s[len] != '\0'; len++);

    for (i = 0; i < len; i++)
        if (s[i] == 32)
            c++;

    printf("No of characters : %d\n", len);
    printf("No of words : %d\n", c + 1);
    printf("No of blank spaces : %d\n", c);
}
