#include<stdio.h>
int main(){

int array[10] = {1,3,2,4,6,5};

int i,j,k,temp;

printf("The initial array elements are:\n");
for (i=0;i<6;i++)
  printf("array[%d] = %d\n",i,array[i]);

for(i=6;i>1;i--)
  for(j=0;j<i-1;j++)
  if (array[j]>array[j+1])
     {
      temp = array[j+1];
      array[j+1] = array[j];
      array[j] = temp;
     }
printf("The sorted array is :\n");
for (i=0;i<6;i++)
  printf("array[%d] = %d\n ",i,array[i]);

return 0;
}

