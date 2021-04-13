#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct dlist
{
int data;
struct dlist *pre;
struct dlist *next;
};
struct dlist * insert(struct dlist *,int);
void display(struct dlist *);
int del(struct dlist *);

void main()
{
struct dlist *first;
int choice;
int n;
char ch='y';
first=NULL;

while(ch=='y')
{
clrscr();
printf("Enter your choice:");
printf("\n Insert :1");
printf("\n Delete :2");
printf("\n Display :3");
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
		printf("/nDeleted element is %d",n);
		break;
	case 3:
		display(first);
		break;
	default:
		printf("\n W R O N G  C H O I C E ");
}
printf("Do you want to Continue[y/n]:");
ch = getch();
   }
}

struct dlist * insert(struct dlist *p,int x)
{
	struct dlist *q,*r;
	r=p;
	q=(struct dlist *)malloc(sizeof(struct dlist));
	q->data = x;
	q->pre = NULL;
	q->next = NULL;
	if(p==NULL)
	{
	return q;
	}
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=q;
	q->pre=p;
	return r;
}
void display(struct dlist *p)
{
int n;
if(p==NULL)
{
printf("\List is empty");
return;
}
printf("\nDisplay from first: 1");
printf("\nDisplay from last: 2");
scanf("%d",&n);

if(n==1)
{
while(p!=NULL)
{
printf("%d",p->data);
p=p->next;
}
while(p!=NULL)
{
printf("%d",p->data);
p = p->pre;
}
}
}

int del(struct dlist *p)
{
struct dlist *q,*r;
int x;
r=p;

if(p==NULL)
{
printf("\nQueue is empty");
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
