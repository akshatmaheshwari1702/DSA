#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct List
{
int data;
struct List * next;
};

struct List * insert(struct List *,int);
void display(struct List *);
int del (struct List *);

void main()
{
struct List * first;
int choice;
int n;
char ch = 'y';
first =NULL;
while(ch=='y')
{
clrscr();
printf("Enter your choice:");
printf("\n Insert : 1");
printf("\n Delete : 2");
printf("\n Display : 3");
printf("\n Enter your choice:");
scanf("%d",&choice);

switch(choice)
	{
	case 1:
		printf("\n Enter element:");
		scanf("%d",&n);
		first = insert(first,n);
		break;

	case 2:
		n=del(first);
		printf("\ndeleted element is %d",n);
		break;

	case 3:
		display(first);
		break;
	default:
		printf("\n W R O N G C H O I C E");

	}
printf("\n DO U WANT TO CONTINUE[y/n]:");
ch = getch();
}
}
struct List * insert(struct List *p,int x)
{
struct List *q,*r;
r=p;
q=(struct List *)malloc(sizeof(struct List));
q->data=x;
q->next=NULL;

if(p==NULL)
{
return q;
}
while(p->next!=NULL)
{
p=p->next;
}
p->next=q;
return r;
}
void display (struct List *p)
{
int n;
if(p==NULL)
{
printf("\nList is empty");
return;
}
while(p!=NULL)
{
printf("%d",p->data);
p=p->next;
}
}
int del(struct List *p)
{
struct List *q,*r;
int x;
r=p;
if(p==NULL)
{
printf("\n Stack is underflow");
return 0;
}
while(p->next->next!=NULL)
{
p=p->next;
}
q=p->next;
p->next=NULL;

x=q->data;
free(q);
return x;
}
que