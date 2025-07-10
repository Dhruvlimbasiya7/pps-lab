#include<stdio.h>
#include<string.h>
void main()
{
    FILE  *fprt ;

    fprt = fopen("a2.txt","w");

    char ch[50];
    scanf(" %[^\n]", &ch);

    for (int i = 0; i < strlen(ch) ; i++)
    {
        fprintf(fprt,"%c",ch[i]);
    }
}