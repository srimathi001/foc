#include<stdio.h>
int ic(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void main()
{
	int a,b;
	printf("enter the value of A and B:");
	scanf("%d%d",&a,&b);
	printf("a=%d  b=%d\n",a,b);
	ic(&a,&b);
	printf("after interchanging:\n");
	printf("a=%d  b=%d\n",a,b);
}
