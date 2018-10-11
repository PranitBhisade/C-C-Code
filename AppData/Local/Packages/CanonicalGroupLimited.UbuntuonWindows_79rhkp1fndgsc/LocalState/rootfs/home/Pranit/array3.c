#include<stdio.h>

int main(){

int i,j,M[3][3];

printf("Enter the elements of the 3x3 matrix:\n");

for(i=0;i<3;i++)
  for(j=0;j<3;j++)
{
	printf("M[%d][%d]\n",i,j);
        scanf("%d",&M[i][j]);

}
printf("The matrix elements are:\n");
for(i=0;i<3;i++){
printf("\n\n");
	for(j=0;j<3;j++)
		printf("%d ",M[i][j]);
}
return 0;
}
