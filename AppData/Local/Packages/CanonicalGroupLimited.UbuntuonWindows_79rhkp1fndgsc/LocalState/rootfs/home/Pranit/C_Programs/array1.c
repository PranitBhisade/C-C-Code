#include<stdio.h>

void traverser(int*, int);

int main()

{
	int arr[5] ={1,2,3,4,5};
	int N = 5;
	
	printf("Press any key for array traversal::\n\n");
	
	return 0;

	traverser(arr,N);

	return 0;

}

void traverser(int *array, int size)
{
	int i;
	for(i=0;i<size;i++)
	printf("arr[%d] = %d\n",i,array[i]);

}


