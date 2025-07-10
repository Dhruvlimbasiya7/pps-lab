#include <stdio.h>
void main()
{
    char vehicleType;
    int hours;
    float charge;

    // type of vehicle user is parking
    printf("Enter the type of vehicle (c for car, b for bus, t for truck): ");
    scanf(" %c", &vehicleType);

    // number of hours user is parking
    printf("Enter the number of hours parked: ");
    scanf("%d", &hours);

    // Calculate the parking charge based on the vehicle type
    if (vehicleType == 'c') {
        charge = hours * 2.0;
    } else if (vehicleType == 'b') {
        charge = hours * 3.0;
    } else if (vehicleType == 't') {
        charge = hours * 4.0;
    } else {
        printf("Invalid vehicle type entered.\n");
    }

    // Display the parking charge with 2 decimals
    printf("The parking charge is: $%.2f\n", charge);
}