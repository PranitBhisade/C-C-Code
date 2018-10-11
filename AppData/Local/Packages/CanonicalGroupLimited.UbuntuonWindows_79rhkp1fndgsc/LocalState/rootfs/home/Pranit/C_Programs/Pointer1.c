#include <stdio.h>

int main()
{
int a;
int *ptr;

a = 50;

ptr = &a;
printf("add of a = %pt value of a = %d\n",ptr,*ptr);
printf("add of ptr = %p\t value of ptr = %p", &ptr,ptr);

return 0;
}

