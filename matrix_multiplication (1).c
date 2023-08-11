#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],p[50][50]={{0,0},{0,0}},sum,i,k,j,r,c;
	printf("enter the number of rows and columns:");
	scanf("%d%d",&r,&c);
	printf("enter the A array elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the B array elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<r;k++)
			{
				p[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("the product of the matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
}
