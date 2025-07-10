<<<<<<< HEAD
#include<stdio.h>
#include<string.h>
void main()
{
    FILE  *fprt ;

    fprt = fopen("a1.txt","r");

    printf("enter the word")

    char ch;

    while(ch != EOF)
    {
        ch = fgetc(fprt);
        printf("%c",ch);
    }
=======
#include<stdio.h>
#include<string.h>
void main()
{
    FILE  *fprt ;

    fprt = fopen("a1.txt","r");

    printf("enter the word")

    char ch;

    while(ch != EOF)
    {
        ch = fgetc(fprt);
        printf("%c",ch);
    }
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}