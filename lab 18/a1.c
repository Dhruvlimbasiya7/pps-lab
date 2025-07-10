<<<<<<< HEAD
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
=======
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
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}