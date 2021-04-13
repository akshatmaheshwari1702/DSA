#include<stdio.h>
#include<conio.h>

void main()
{
int c,first,last,middle,n,i,search,array[10];
clrscr();
printf("Enter 10 integers:");
for(c=0;c<10;c++)
	{
	 scanf("%d",&array[c]);
	}
printf("Enter value to find:");
scanf("%d",&search);
first=0;
last=9;
middle(first+last)/2;

while(first<=last)
	{
	if(array[middle]<search)
		{
		first=middle+i;
		}
	else
		{

		if(array[middle]==search)
			{
			printf("%d found %d",search,middle+1);
			break;
			}
			else
			{
			last=middle-1;
			}
		}
		middle=(first+last)/2;
	}
	if(first>last)
	{
	printf("Not found %d isn't present in the list",search);
	}
getch();
}

