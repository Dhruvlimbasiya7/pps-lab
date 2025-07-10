<<<<<<< HEAD
#include<stdio.h>
void main ()
{
    int roll_no ;

    float s1 , s2 , s3 , s4 , percentage ;

    char name[100] ;

    printf("enter your name =");
    scanf("%s", &name[100]);

    printf("enter your roll no. =");
    scanf("%d",&roll_no);

    printf("enter marks to subject 1 =");
    scanf("%f",&s1);

    printf("enter marks to subject 2 =");
    scanf("%f",&s2);

    printf("enter marks to subject 3 =");
    scanf("%f",&s3);

    printf("enter marks to subject 4 =");
    scanf("%f",&s4);

    percentage=((s1+s2+s3+s4)/400)*100;

    printf("%s has scored = %f", name , percentage);

=======
#include<stdio.h>
void main ()
{
    int roll_no ;

    float s1 , s2 , s3 , s4 , percentage ;

    char name[100] ;

    printf("enter your name =");
    scanf("%s", &name[100]);

    printf("enter your roll no. =");
    scanf("%d",&roll_no);

    printf("enter marks to subject 1 =");
    scanf("%f",&s1);

    printf("enter marks to subject 2 =");
    scanf("%f",&s2);

    printf("enter marks to subject 3 =");
    scanf("%f",&s3);

    printf("enter marks to subject 4 =");
    scanf("%f",&s4);

    percentage=((s1+s2+s3+s4)/400)*100;

    printf("%s has scored = %f", name , percentage);

>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}