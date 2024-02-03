#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("enter the number : \n");
    scanf("%d",&num);
    if(num%2==0 && num%3==0)
    {

        printf("the number is divisible by 2 and 3 ");
    }
    else
    {

        printf("the number is not divisible by 2 and 3");
    }
    getch();

    }
