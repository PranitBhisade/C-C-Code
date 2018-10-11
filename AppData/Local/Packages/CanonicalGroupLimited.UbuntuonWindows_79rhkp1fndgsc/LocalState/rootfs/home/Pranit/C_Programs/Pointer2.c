#include<stdio.h>
int main()
{

int arr[5] = {1,2,3,4,5};
int *ptr;

ptr = &arr[4];

printf("address of fourth element is %p",ptr);
printf("value of fourth element is %d",*ptr);

return 0;

}


