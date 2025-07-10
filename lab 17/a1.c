#include<stdio.h>

struct ComplexNumber
{
    int Real ;
    float Imaginery ;
}C1,C2;


void main(){
        printf("enter value of Real part of C[1] : ");
        scanf("%d",&C1.Real);

        printf("enter value of Imaginery part of C[1] : ");
        scanf("%f",&C1.Imaginery);

        printf("enter value of Real part of C[2] : ");
        scanf("%d",&C2.Real);

        printf("enter value of Imaginery part of C[2] : ");
        scanf("%f",&C2.Imaginery);

    printf("enter value of Real part of C1 : %d" , C1.Real);
    printf("\nenter value of Imaginery part of C1 : %fi " , C1.Imaginery);
    printf("\nenter value of Real part of C2 : %d" , C2.Real);
    printf("\nenter value of Imaginery part of C2 : %fi " , C2.Imaginery);

    int final_Real ;
    float final_Imaginery ;

    final_Real = C1.Real + C2.Real ;
    final_Imaginery = C1.Imaginery + C2.Imaginery;

    printf("\nfinal sum = %d + %fi", final_Real , final_Imaginery );

    //(a+b)(c+d)=ac + bc + ad + bd 

    printf("\nfinal multiplication = %f + %fi" , ( (C1.Real*C2.Real) - (C1.Imaginery*C2.Imaginery) ) , ( (C1.Imaginery*C2.Real) + (C1.Real*C2.Imaginery) ));
}