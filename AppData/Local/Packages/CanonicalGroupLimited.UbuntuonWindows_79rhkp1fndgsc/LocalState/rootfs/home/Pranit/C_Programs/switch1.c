#include<stdio.h>

int main()
{
	long num, temp;
	int sum = 0;
	printf("Enter the number\n");
	scanf("%ld",&num);
	temp = num;
	
	while(temp != 0)
	{
		sum = sum + temp%10;
		temp = temp/10;
	}
	
	printf("\nThe sum of digits of %ld is %d",num,sum);

return 0;
}
