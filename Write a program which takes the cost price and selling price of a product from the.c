#include<stdio.h>
#include<conio.h>
void main()
{

    float mp,sp,profit;
    printf("enter the marked price ");
    scanf("%f",&mp);
    printf("enter the selling price ");
    scanf("%f",&sp);
    profit=((sp-mp)/mp)*100;
    printf("the profit is equal to %f",profit);
    getch();
}
