#include<stdio.h>
#include<conio.h>
void main()
{
int stack[5];
int top=-1;
int n,choice;
char ch='y';
while(ch=='y')
{
	clrscr();
	printf("what do you want:");
	printf("/nPush:1");
	printf("/nPop:2");
	printf("/nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			if(top>=4)
			{
			printf("/nStack is overflow");
			}
			else
			{
			top++;
			printf("enter a value:");
			scanf("%d",&n);
			stack[top]=n;
			}
			break;
		case 2:
			if(top<0)
			{
			printf("/nStack is underflow");
			}
			else
			{
			n=stack[top];
			printf("/nPoped element is %d",n);
			top--;
			}
			break;
		default:
			printf("WRONG CHOICE");
	}
printf("DO U WANT TO CONTINUE:[y/n]:");
ch=getch();
}
}