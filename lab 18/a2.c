#include<stdio.h>
#include<string.h>
void main()
{
    FILE  *fprt ;

    fprt = fopen("a1.txt","r");

    char ch;

    while(ch != EOF)
    {
        ch = fgetc(fprt);
        printf("%c",ch);
    }
}