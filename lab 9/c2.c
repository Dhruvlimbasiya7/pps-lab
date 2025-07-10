#include <stdio.h>

// Function to calculate factorial
 long factorial(int n) {
     long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

void main() {
    int n;
    double e1 = 1.0 , e2=1.0;

    printf("Enter the number of terms to calculate for e1: ");
    scanf("%d", &n);

    int a ;
    printf("Enter the number of terms to calculate for e2: ");
    scanf("%d", &a);

    for (int i = 1; i <= n; i++) {
        e1 += 1.0 / factorial(i);
    }

    printf("Estimated value of e: %.10f\n", e1);

    for (int i = 1; i <= a; i++) {
        e2 += 1.0 / factorial(i);
    }

    printf("Estimated value of e: %.10f\n", e2);

    if ((e1-e2)<= 0.0000001) //checking difference
    {

    }
    else{
        main();
    }

    
}