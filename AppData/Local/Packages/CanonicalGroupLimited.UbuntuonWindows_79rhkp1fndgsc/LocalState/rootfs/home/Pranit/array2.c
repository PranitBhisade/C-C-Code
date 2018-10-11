#include<stdio.h>

int main(){

int array[10] = {11,22,33,44,55};

int i,N,k,D;
N = 5;

printf("array elements are\n");

for(i=0;i<N;i++)
 printf("array[%d] = %d\n",i,array[i]);

printf("Enter no. to be deleted:\n");
scanf("%d",&k);

D = array[k];

for(i=k;i<=N-2;i++)
array[i] = array[i+1];
N = N-1;

printf("array elements are:\n");
for(i=0;i<N;i++)
 printf("array[%d] = %d\n",i,array[i]);


return 0;
}
