//Check whether the given number is Armstrong Number or not
#include<stdio.h>

int isArmstrong(int n) {
    int originalNumber, remainder, result = 0, powerOfDigit;

    originalNumber = n;

    // Find the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        powerOfDigit++;
    }

    originalNumber = n;

    // Calculate the sum of the cube of each digit
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder;
        originalNumber /= 10;
    }

    // Return true if the original number is equal to the result, else false
    return (result == n);
}