#include<stdio.h>
#include<conio.h>

void main()
{
int a[5];
int c,i,f=0;
clrscr();
printf("\nenter 5 values:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("which value u want to search:");
scanf("%d",&c);
for(i=0;i<5;i++)
{
if(a[i]==c)
{
f=1;
break;
}
}

if(f==1)
{
printf("element found");
}
else
{
printf("element not found");
}
getch();
}

