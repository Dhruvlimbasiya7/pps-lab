#include <stdio.h>
void main() 
{
    int orderQuantity, stockQuantity;
    char creditStatus;

    // Input: Order quantity, stock quantity, and credit status
    printf("Enter the order quantity: ");
    scanf("%d", &orderQuantity);

    printf("Enter the stock quantity: ");
    scanf("%d", &stockQuantity);

    printf("Is the credit status OK? (Y/N): ");
    scanf(" %c", &creditStatus);  // Note the space before %c to consume any leftover newline character

    // Process the order based on the company policy
    if (creditStatus == 'N' || creditStatus == 'n') 
    {
        // Rule (b): Credit is not OK, do not supply
        printf("Do not supply. Sending intimation to the customer.\n");
    } 
    else if (creditStatus == 'Y' || creditStatus == 'y') 
    {
        if (orderQuantity <= stockQuantity) {
            // Rule (a): Credit is OK and stock is sufficient
            printf("Supply the full order of %d units.\n", orderQuantity);
        } 
        else {
            // Rule (c): Credit is OK but stock is insufficient
            printf("Supply %d units from stock. Intimating the customer that the balance of %d units will be shipped later.\n", stockQuantity, orderQuantity - stockQuantity);
        }
    } 
    else {
        // Invalid credit status input
        printf("Invalid credit status entered. Please enter 'Y' or 'N'.\n");
    }
}