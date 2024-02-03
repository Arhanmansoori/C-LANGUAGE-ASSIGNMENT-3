#include<stdio.h>
#include<conio.h>
void main()
{

    int number;
    printf("enter the number to check whether it is three digit or  not : \n");
    scanf("%d",&number);
    if(number>99 && number<1000)

    {

        printf("the number is a three digit number ");

    }
    else
    {

        printf("the number is not a three digit number ");
    }
    getch();
}
