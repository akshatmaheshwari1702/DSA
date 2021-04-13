#include<stdio.h>
#include<conio.h>
void insert();
void delete();

int front = -1, rear = -1;
int queue[5];
void main ()
{
    int choice;
    while(choice != 3)
    {
	clrscr();
	printf("\n1.insert an element\n2.Delete an element\n3.Exit\n");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	    case 1:
	    insert();
	    break;
	    case 2:
	    delete();
	    break;
	    case 3:
	    exit(0);

	    break;
	      default:
	    printf("\nEnter valid choice??\n");
	}
    }
}
void insert()
{
    int item;
    printf("\nEnter the element\n");
    scanf("\n%d",&item);
    if(rear == 5-1)
    {
	printf("\nOVERFLOW\n");
	return;
    }
    if(front == -1 && rear == -1)
    {
	front = 0;
	rear = 0;
    }
    else
    {
	rear = rear+1;
    }
    queue[rear] = item;
    printf("\nValue inserted ");

}
void delete()
{
    int item;
    if (front == -1 || front > rear)
    {
	printf("\nUNDERFLOW\n");
	return;

    }
    else
    {
	item = queue[front];
	if(front == rear)
	{
	    front = -1;
	    rear = -1 ;
	}
	else
	{
	    front = front + 1;
	}
	printf("\nvalue deleted ");
    }


}

