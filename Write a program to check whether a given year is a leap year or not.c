#include<stdio.h>
#include<conio.h>
void main()
{

    int year;
    printf("enter the year to check whether it is leap year or not : \n");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)|| (year%400==0))
    {

        printf("this year is a leap year ");

    }
    else
    {

        printf("the year is not a leap year ");
    }
    getch();
}
