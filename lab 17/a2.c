#include <stdio.h>

// Define the structure for a student
struct Student {
    char name[100];
    float Marks[5];
    int Roll_no;
};

void displayVal(struct Student s)
{
    int total = 0 ;
    float average ;
    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 5 ; j++)
        {
            total += s.Marks[j];
        }
        average = total / 5 ;
        printf("total marks : %d\taverage marks : %f\n",total,average);
        total = 0;
        average = 0;
    }
} 

void main() {
    struct Student students[3]; // Array of structures
    int i;

    // Read data for 5 students
    for (i = 0; i < 3; i++) 
    {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]", &students[i].name); // Read string with spaces

        printf("Roll_no: ");
        scanf("%d", &students[i].Roll_no);
        
        for (int j = 0; j < 5 ; j++)
        {
            printf("Marks: ");
            scanf("%f", &students[i].Marks[j]);
        }
        displayVal(students[i]);    // average marks and total
        printf("\n");
    }
}