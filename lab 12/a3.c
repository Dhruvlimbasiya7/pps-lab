<<<<<<< HEAD
#include <stdio.h>

void main() {
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int sourceArray[size];
    int destinationArray[size];

    for (int i = 0; i < size; i++) {
        printf("Enter the elements of the source array[%d]:\n",i);
        scanf("%d", &sourceArray[i]);
    }

    // Copy in reverse order
    for (int i = 0; i < size; i++) {
        destinationArray[i] = sourceArray[size - 1 - i]; // Reverse indexing
    }

    printf("Source array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", sourceArray[i]);
    }
    printf("\n");

    printf("Destination array (reversed): ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", destinationArray[i]);
    }
    printf("\n");

=======
#include <stdio.h>

void main() {
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int sourceArray[size];
    int destinationArray[size];

    for (int i = 0; i < size; i++) {
        printf("Enter the elements of the source array[%d]:\n",i);
        scanf("%d", &sourceArray[i]);
    }

    // Copy in reverse order
    for (int i = 0; i < size; i++) {
        destinationArray[i] = sourceArray[size - 1 - i]; // Reverse indexing
    }

    printf("Source array: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", sourceArray[i]);
    }
    printf("\n");

    printf("Destination array (reversed): ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", destinationArray[i]);
    }
    printf("\n");

>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}