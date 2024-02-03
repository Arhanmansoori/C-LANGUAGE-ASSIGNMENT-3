#include<stdio.h>
#include<conio.h>
void main()
{

    char ch;
    printf("enter the character : \n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {

        printf("this is upper case ");
    }
    else if(ch>='a' && ch<='z')
    {

        printf("this is lower case");
    }
    getch();
}
