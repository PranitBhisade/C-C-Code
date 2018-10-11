#include<stdio.h>
int main()
{
	int a[5] , i, sum = 0;
	float avg;
	printf("Enter the numbers in array: \n");
	for(i = 0 ; i<= 5 ; i++)
	scanf("%d",&a[i]);
	for(i = 0;i<=5;i++)
	printf("Array elements are %d \n",a[i]);
	for(i = 0; i<=5;i++)
	sum = sum +a[i];
	printf("sum of array elements are %d \n",sum);
	avg = sum/6;
	printf("average of sum of element is %f \n",avg);

return 0;
}
