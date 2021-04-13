#include<stdio.h>
#include<conio.h>

int fact(int)
int fact(int x)
{
int f=1;
if(x==1)
{
return 1;
}
f=x*fact(x-1);
return f;

}
void main()
{
int n,f;
clrscr();
printf("enter a value:");
scanf("%d",&n);
f=fact(n);
printf("Fact=%d",f);
getch();
}
