#include <stdio.h>
void main() 
{
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Check if the numbers are equal using XOR
    if (num1 ^ num2) 
    {
        printf("The numbers are not equal.\n");
    } else {
        printf("The numbers are equal.\n");
    }
}