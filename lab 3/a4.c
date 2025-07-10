<<<<<<< HEAD
#include <stdio.h>
void main() 
{
    float x1, y1, x2, y2, x3, y3;
    float area;

    // Input coordinates of the three points
    printf("Enter coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter coordinates of the third point (x3, y3): ");
    scanf("%f %f", &x3, &y3);

    // Calculate the area of the triangle formed by the three points
    area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    // Check if the area is zero
    if (area == 0) {
        printf("All three points lie on the same straight line.\n");
    } else {
        printf("The points do not lie on the same straight line.\n");
    }
=======
#include <stdio.h>
void main() 
{
    float x1, y1, x2, y2, x3, y3;
    float area;

    // Input coordinates of the three points
    printf("Enter coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter coordinates of the third point (x3, y3): ");
    scanf("%f %f", &x3, &y3);

    // Calculate the area of the triangle formed by the three points
    area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    // Check if the area is zero
    if (area == 0) {
        printf("All three points lie on the same straight line.\n");
    } else {
        printf("The points do not lie on the same straight line.\n");
    }
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}