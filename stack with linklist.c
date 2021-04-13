#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct list
{
int data;
struct list *next;
};

struct list *insert(struct list *,int);
void display(struct list *);
int del(struct list *);

void main()
{
struct list *first;
int choice;
int n;
char ch='y';
first=NULL;
while(ch=='y')
{
clrscr();
printf("Enter your choice:");
printf("\nInsert : 1");
printf("\nDelete : 2");
printf("\nDisplay ; 3");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("\nEnter element:");
		scanf("%d",&n);
		first = insert(first,n);
		break;
	case 2:
		n = del(first);
		printf("\nDeleted element is %d",n);
		break;
	case 3:
		display(first);
		break;
	default:
		printf("\nW R O N G C H O I C E");
}
printf("\n DO YOU WANT TO CONTINUE[y/n]:");
ch = getch();
}
}
struct list *insert(struct list *p,int x)
{
struct list *q,*r;
r=p;
q=(struct list *)malloc (sizeof(struct list));
q->data =x;
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
void display(struct list *p)
{
int n;
if(p==NULL)
{
printf("\nList is empty");
return;
}
while(p!=NULL)
{
printf("%d\n",p->data);
p=p->next;
}
}
int del(struct list *p)
{
struct list *q,*r;
int x;
r=p;

if(p==NULL)
{
printf("\n Stack is Underflow");
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