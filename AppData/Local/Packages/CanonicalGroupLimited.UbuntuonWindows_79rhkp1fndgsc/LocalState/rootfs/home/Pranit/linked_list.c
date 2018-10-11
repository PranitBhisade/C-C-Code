#include<stdio.h>

int main(){

struct node{
int INFO;
struct node *NEXT;
};

struct node *FIRST = NULL;
struct node *LAST = NULL;

void insert(int);
int  delete(int);
void print(void);
struct node *search(int);

void main(){
int num1,num2,choice;
struct node *location;

while(1){
printf("\nSelect an option\n");
printf("\n1 -Insert");
printf("\n2 -Delete");
printf("\n3 -Search");
printf("\n4 -Print");
printf("\n5 -Exit");

printf("Enter the choice you want:");
scanf("%d",&choice);

switch(choice){
case 1:
{
printf("\n Enter the element to be inserted into the linked list: ");
scanf("%d",&num1);
insert(num1);
printf("\n%d successfully inserted into the linked list:",num1);
return 0;
break;
}

case 2:
{
printf("\nEnter the element which you want to delete:");
scanf("%d,&num1");

if(num==-9999)
printf("\n\t%d is not present in the linked list\n",num1);
else


