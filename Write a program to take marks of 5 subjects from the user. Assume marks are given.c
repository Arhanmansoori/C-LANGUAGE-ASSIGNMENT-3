#include<stdio.h>
#include<conio.h>
void main()
{

int phy,chem,math,bio,eng,hindi;
float marks;
printf("enter the marks of all five subjects");
scanf("%d%d%d%d%d",&phy,&chem,&math,&bio,&eng,&hindi);
marks=(phy+math+chem+bio+eng+hindi)/500*100;
if(marks<=33)
{

    printf("the student has passed  the examination ");

}
else {
    printf("the student has failed the examination ");
}
getch();
}
