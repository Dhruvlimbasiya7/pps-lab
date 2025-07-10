<<<<<<< HEAD
#include <stdio.h>

int main() {
    int marks[20];
    int failCount = 0, passCount = 0, firstClassCount = 0, distinctionCount = 0;


    for (int i = 0; i < 20; i++) 
    {
        printf("Enter the marks of student %d:\n",i+1);
        scanf("%d", &marks[i]);

        if (marks[i] < 40) {
            failCount++;
        } 
        else if (marks[i] < 50) {
            passCount++;
        } 
        else if (marks[i] < 60) {
            firstClassCount++;
        } 
        else if (marks[i] >= 60) {
            distinctionCount++;
        }
    }

    printf("\nResults:\n");
    printf("FAIL: %d\n", failCount);
    printf("PASS: %d\n", passCount);
    printf("FIRST CLASS: %d\n", firstClassCount);
    printf("DISTINCTION: %d\n", distinctionCount);

}
=======
#include <stdio.h>

int main() {
    int marks[20];
    int failCount = 0, passCount = 0, firstClassCount = 0, distinctionCount = 0;


    for (int i = 0; i < 20; i++) 
    {
        printf("Enter the marks of student %d:\n",i+1);
        scanf("%d", &marks[i]);

        if (marks[i] < 40) {
            failCount++;
        } 
        else if (marks[i] < 50) {
            passCount++;
        } 
        else if (marks[i] < 60) {
            firstClassCount++;
        } 
        else if (marks[i] >= 60) {
            distinctionCount++;
        }
    }

    printf("\nResults:\n");
    printf("FAIL: %d\n", failCount);
    printf("PASS: %d\n", passCount);
    printf("FIRST CLASS: %d\n", firstClassCount);
    printf("DISTINCTION: %d\n", distinctionCount);

}
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
