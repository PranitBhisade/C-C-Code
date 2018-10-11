#include<stdio.h>

int main(){

int array[10] = {11,22,33,44,55};

int i,k,N,P; /* index,position,size,element respectively */
N = 5;

printf("Elements present in array are:\n");

for(i = 0; i<N; i++)

 printf("array[%d] = %d\n",i,array[i]);

printf("Enter the number to be inserted in array:\n");

scanf("%d",&P);

printf("Enter the position where element should be inserted:\n");
scanf("%d",&k);

for(i=N;i>=k;i--)
array[i+1] = array[i];
array[k] = P;
N = N +1;

printf("New array elements are:\n");
for(i = 0 ; i< N ; i++ )
 printf("array[%d] = %d \n",i,array[i]);


return 0;
}
