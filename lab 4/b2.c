#include <stdio.h>
void main() 
{
    int num1, num2, num3, greatest;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the greatest number using conditional operators
    greatest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    // Print the greatest number
    printf("The greatest number is: %d\n", greatest);
}