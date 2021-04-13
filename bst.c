#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct BST
{
struct BST *l;
int data;
struct BST *r;
};
struct BST * insert(struct BST *,int);

void inorder(struct BST *);
void preorder(struct BST *);
void postorder(struct BST *);

void main()
{
struct BST *root;
clrscr();
root = NULL;

root = insert(root,15);
root = insert(root,5);
root = insert(root,18);
root = insert(root,8);
root = insert(root,3);
root = insert(root,6);
root = insert(root,21);
root = insert(root,16);
root = insert(root,17);

printf("\n Inorder:");
inorder(root);
printf("\n Preorder:");
preorder(root);
printf("\n Postorder:");
postorder(root);

getch();
}
struct BST * insert(struct BST *p,int x)
{
struct BST *q,*r;
r = p;

q= (struct BST *)(malloc(sizeof(struct BST)));
q->l = NULL;
q->data = x;
q->r = NULL;

if(p==NULL)
{
return q;
}
while(p!=NULL)
{
	if(p->data>x)
	{
		if(p->l == NULL)
		{
		p->l=q;
		return r;
		}
		else
		{
		p=p->l;
		}
	}
	else
	{
		if(p->r==NULL)
		{
		p->r=q;
		return r;
		}
		else
		{
		p=p->r;
		}
	}
}
return r;
}

void inorder(struct BST *p)
{
	if(p==NULL)
	{
	return;
	}
	inorder(p->l);
	printf("%d ",p->data);
	inorder(p->r);
}

void preorder(struct BST *p)
{
	if(p==NULL)
	{
	return;
	}
	printf("%d ",p->data);
	preorder(p->l);
	preorder(p->r);
}

void postorder(struct BST *p)
{
	if(p==NULL)
	{
	return;
	}
	postorder(p->l);
	postorder(p->r);
	printf("%d ",p->data);
}
