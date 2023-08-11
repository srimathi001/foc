#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],s[50][50]={0,0,0,0},sum,i,j,r,c;
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
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("the sum of the matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
}
