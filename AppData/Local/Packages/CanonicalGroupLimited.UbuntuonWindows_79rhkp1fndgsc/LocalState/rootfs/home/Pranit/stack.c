#include<stdio.h>

int stack[10];
int top = -1;
void push(int);
int pop();
void display();

int main(){
int choice;
int num1 = 0, num2 = 0;
while(1)
{

printf("Select a choice from the following:");
printf("\n[1] Push an element into stack");
printf("\n[2] Pop out an element from the stack");
printf("\n[3] Display the stack elements");
printf("\n\t Your choice:");
scanf("%d",&choice); 


switch(choice)
{
case 1:
{
printf("\n\tEnter the element to be pushed into the stack:");
scanf("%d",&num1);
push(num1);
break;
}
case 2:
{
num2 = pop();
printf("\n\t%d element popped out of the stack\n\t",num2);
return ()
break;

return 0;
