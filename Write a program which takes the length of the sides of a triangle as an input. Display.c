#include<stdio.h>
#include<conio.h>
void main()
{
    int b,h;
    float area;
    printf("enter the breadth and height of triangle ");
    scanf("%d%d",&b,&h);
    area=0.5*b*h;
    printf("the area of triangle is equal to %.2f",area);
    getch();
}
