#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    char *charater;

    int i;
    printf("enter string length :");
    scanf("%d",&i);

    charater = (char*)malloc((i+1)*sizeof(char));
    printf("enter string :");
    scanf("%s",charater);

    printf("original : %s\n",charater);
    printf("reversed : %s\n",strrev(charater));
    free(charater);
}