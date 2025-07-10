<<<<<<< HEAD
#include<stdio.h>
void main ()
{
    char a ;

    printf("enter a alphabet :");
    scanf(" %c",&a);

    if ((a<=65 && a>=90) || (a<=97 && a>=122))
    {
        switch (a)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("you enter a vowel :%c", a);
            break;
        
        default:
            printf("you enter a consonant :%c",a);
            break;
        }
    }
    else{
        printf("enter alphabet only");
    }
    
=======
#include<stdio.h>
void main ()
{
    char a ;

    printf("enter a alphabet :");
    scanf(" %c",&a);

    if ((a<=65 && a>=90) || (a<=97 && a>=122))
    {
        switch (a)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("you enter a vowel :%c", a);
            break;
        
        default:
            printf("you enter a consonant :%c",a);
            break;
        }
    }
    else{
        printf("enter alphabet only");
    }
    
>>>>>>> 5285845370b9ff8706ce2f298141264c24198a9c
}