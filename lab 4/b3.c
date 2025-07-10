<<<<<<< HEAD
#include <stdio.h>
void main() 
{
    char health, location, gender;
    int age;
    float policyAmount, premiumRate, maxPolicyAmount;

    // Input details from the user
    printf("Enter health condition (e for excellent, p for poor): ");
    scanf(" %c", &health);
    
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter location (c for city, v for village): ");
    scanf(" %c", &location);

    printf("Enter gender (m for male, f for female): ");
    scanf(" %c", &gender);

    printf("Enter policy amount: ");
    scanf("%f", &policyAmount);

    // Determine eligibility, premium rate, and maximum policy amount
    if (health == 'e' && age >= 25 && age <= 35 && location == 'c') 
    {
        if (gender == 'm') 
        {
            premiumRate = 4.0;
            maxPolicyAmount = 200000;
        } 
        else if (gender == 'f') 
        {
            premiumRate = 3.0;
            maxPolicyAmount = 100000;
        } 
        else {
            printf("Invalid gender input.\n");
        }
    } 
    else if (health == 'p' && age >= 25 && age <= 35 && location == 'v' && gender == 'm') 
    {
        premiumRate = 6.0;
        maxPolicyAmount = 10000;
    } 
    else {
        printf("The person is not insured.\n");
    }

    // Check if the policy amount exceeds the maximum allowed
    if (policyAmount > maxPolicyAmount) 
    {
        printf("Policy amount exceeds the maximum allowed limit of Rs. %.2f.\n", maxPolicyAmount);
    } 
    else {
        printf("The person is insured.\n");
        printf("Premium rate: Rs. %.2f per thousand\n", premiumRate);
        printf("Maximum policy amount: Rs. %.2f\n", maxPolicyAmount);
    }
=======
#include <stdio.h>
void main() 
{
    char health, location, gender;
    int age;
    float policyAmount, premiumRate, maxPolicyAmount;

    // Input details from the user
    printf("Enter health condition (e for excellent, p for poor): ");
    scanf(" %c", &health);
    
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter location (c for city, v for village): ");
    scanf(" %c", &location);

    printf("Enter gender (m for male, f for female): ");
    scanf(" %c", &gender);

    printf("Enter policy amount: ");
    scanf("%f", &policyAmount);

    // Determine eligibility, premium rate, and maximum policy amount
    if (health == 'e' && age >= 25 && age <= 35 && location == 'c') 
    {
        if (gender == 'm') 
        {
            premiumRate = 4.0;
            maxPolicyAmount = 200000;
        } 
        else if (gender == 'f') 
        {
            premiumRate = 3.0;
            maxPolicyAmount = 100000;
        } 
        else {
            printf("Invalid gender input.\n");
        }
    } 
    else if (health == 'p' && age >= 25 && age <= 35 && location == 'v' && gender == 'm') 
    {
        premiumRate = 6.0;
        maxPolicyAmount = 10000;
    } 
    else {
        printf("The person is not insured.\n");
    }

    // Check if the policy amount exceeds the maximum allowed
    if (policyAmount > maxPolicyAmount) 
    {
        printf("Policy amount exceeds the maximum allowed limit of Rs. %.2f.\n", maxPolicyAmount);
    } 
    else {
        printf("The person is insured.\n");
        printf("Premium rate: Rs. %.2f per thousand\n", premiumRate);
        printf("Maximum policy amount: Rs. %.2f\n", maxPolicyAmount);
    }
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}