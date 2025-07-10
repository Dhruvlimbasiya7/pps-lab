#include <stdio.h>
void main() 
{
    int daysLate;
    float fine = 0.0;

    // Prompt the user to enter the number of days late
    printf("Enter the number of days the book is late: ");
    scanf("%d", &daysLate);

    // Calculate the fine based on the number of days late
    if (daysLate <= 5) 
    {
        fine = daysLate * 0.50; // 50 paisa per day
    } 
    else if (daysLate >= 6 && daysLate <= 10) 
    {
        fine = 5 * 0.50 + (daysLate - 5) * 1.00; // 50 paisa for first 5 days, 1 rupee for the rest
    } 
    else if (daysLate > 10 && daysLate <= 30) 
    {
        fine = 5 * 0.50 + 5 * 1.00 + (daysLate - 10) * 5.00; // 50 paisa for first 5 days, 1 rupee for next 5 days, 5 rupees for the rest
    } 
    else if (daysLate > 30) 
    {
        printf("Your membership has been cancelled due to returning the book after 30 days.\n");
    }

    // Display the fine
    printf("The fine for returning the book %d days late is: Rs. %.2f\n", daysLate, fine);
}