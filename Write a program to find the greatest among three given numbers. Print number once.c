#include<stdio.h>
#include<conio.h>
void main()
{

    int a,b,c;
    printf("enter the three numbers ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {

        printf("a is greater than b and c ");
    }
    else if(b>a && b>c)
    {

        printf("b is greater than a and c");
    }
   else if(c>a && c>b)
   {

       printf("c is greater than a and b");
   }
   getch();
}
