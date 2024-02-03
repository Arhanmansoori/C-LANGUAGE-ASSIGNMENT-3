#include<stdio.h>

void main()
{
    float a, b, c, discriminant;


    printf("Enter the values (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);


    discriminant = b * b - 4 * a * c;


    if (discriminant > 0)
    {
        printf("The roots are real and distinct.\n");
    }
    else if (discriminant == 0)
    {
        printf("The roots are real and equal.\n");
    }
    else if (discriminant < 0)
    {
        printf("The roots are imaginary.\n");
    }
}
