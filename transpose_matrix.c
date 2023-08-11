#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],i,j,r,c;
	printf("enter the number of rows and columns:");
	scanf("%d%d",&r,&c);
	printf("enter the array elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("the matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("the transpose of the matrix is:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
