#include <stdio.h>
void main()
{
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);

    if (c >= 65 && c <= 90)
    {
        printf("%c is a capital letter.\n", c);
    } 
    else if (c >= 97 && c <= 122) 
    {
        printf("%c is a small case letter.\n", c);
    } 
    else if (c >= 48 && c <= 57) 
    {
        printf("%c is a digit.\n", c);
    } 
    else {
        printf("%c is a special symbol.\n", c);
    }
}