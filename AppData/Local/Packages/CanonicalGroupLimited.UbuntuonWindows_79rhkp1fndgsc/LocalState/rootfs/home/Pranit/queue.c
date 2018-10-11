#include<stdio.h>
#include<stdlib.h>

int queue[100];
int front = -1;
int rear = -1;
void insert(int);
int del();
void display();

int main(){

int choice;
int num1=0;
int num2=0;
while(1)
{
printf("\nSelect a choice from the following:");
printf("\n[1] Add an element into in queue");
printf("\n[2] Remove an element from queue");
printf("\n[3] Display queue elements");
printf("\n[4] Exit");
printf("\n Enter your choice:\n");
scanf("%d",&choice);

switch(choice)
{
case1 :
{
printf("\n\t Enter the element to be added to queue:");
scanf("%d",&num1);
insert(num1);
break;
}
case 2:
{
num2 = del();

if(num2 == -999);

	 else
	printf("\t\n%d element removed from the queue\n\t",num2);
return 0;
break;
}
case 3:
{
display();
break;
}
case 4:
{
exit(1);
break;
}
default:
printf("\n Invalid choice");
break;

}
 }
}

void insert(int element)
{
if(front == -1){
front = rear = front+1;
queue[front] = element;

}

if(rear == 99)
{
printf("Queue is Full.\n ");

}

rear = rear+1;
queue[rear] = element;
}

int del()
{
int i;
if(front == -1 && rear == -1)
{
printf("\n Queue is empty\n");
return(-999);

}
if(front!=-1 && front==rear)
{
i=queue[front];
front = -1;
rear = -1;
return(i);
}
return(queue[front++]);
}

void display()
{

int i;
if(front== -1)
{
printf("\n\tQueue is empty\n");
return;
}

printf("\n\tThe various queue elements are:\n");
for(i=front;i<=rear;i++)
printf("\t%d",queue[i]);
}




