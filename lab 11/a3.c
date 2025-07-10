#include<stdio.h>
void main()
{

    for (int a = 0; a <= 100; a++)
    {
        for (int b = 0; b <= 100; b++)
        {
            for (int c = 0; c <= 100; c++)
            {
                if ((a*a)+(b*b)==(c*c))
                {
                    printf("%d %d %d\n", a, b, c);
                }
            }
            
        }
        
    }
    
}