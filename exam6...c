#include<stdio.h>
int main()
{
	int rows = 6;
	int i,j;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i*i);
		}
		printf("\n");
	}
}
