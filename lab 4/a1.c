#include <stdio.h>
void main() 
{
    float weight;

    // Input: Weight of the boxer in pounds
    printf("Enter the boxer's weight in pounds: ");
    scanf("%f", &weight);

    // Determine and print the weight class
    if (weight < 115) 
    {
        printf("The boxer's weight class is: Flyweight\n");
    } 
    else if (weight >= 115 && weight <= 121) 
    {
        printf("The boxer's weight class is: Bantamweight\n");
    } 
    else if (weight >= 122 && weight <= 153) 
    {
        printf("The boxer's weight class is: Featherweight\n");
    } 
    else if (weight >= 154 && weight <= 189) 
    {
        printf("The boxer's weight class is: Middleweight\n");
    } 
    else if (weight >= 190) 
    {
        printf("The boxer's weight class is: Heavyweight\n");
    } 
    else {
        printf("Invalid weight entered.\n");
    }
}