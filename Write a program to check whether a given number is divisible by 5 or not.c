#include<stdio.h>
#include<conio.h>
void main()
{
    int number;
    printf("enter the number to check whether it is divisible by 5 or not : \n");
    scanf("%d",&number);
    if(number%5==0)
    {

        printf("the number is divisible by 5");
    }
    else
    {

        printf("the number is not divisible by 5");
    }
}
