#include<stdio.h>

int main(){

int array[10] = {1,2,3,4,5};

int i,flag,k,index;

flag = 0;

printf("Array elements are:\n");

for (i=0;i<5;i++)
  printf("array[%d] = %d\n",i,array[i]);

printf("Enter the elements to be searched\n");
scanf("%d",&k);

for(i=0;i<5;i++)
 if(k==array[i])
{
	printf("searched element is found at position %d ",index);
}/*
else{

  if(flag == 1)
	printf("Search is successful %d elemets is present at index ocation %d in array",k,index);
 else
        printf("search is Unsuccessul search");

}*/
return 0;
}

