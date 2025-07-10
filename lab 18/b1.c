#include<stdio.h>
#include<string.h>
void main()
{


    //merge to files
    FILE *fptrr;
    fptrr = fopen("a1.txt","r");
    FILE  *fprt ;

    fprt = fopen("a2.txt","r");

    FILE *fptr;

    fptr = fopen("merge.txt","w");

    char ch;

    while(ch != EOF)
    {
        ch = fgetc(fptrr);
        fprintf(fptr,"%c",ch);
    }
    printf(" ");
    ch="";
    while(ch != EOF)
    {
        ch = fgetc(fprt);
        fprintf(fptr,"%c",ch);
    }

}