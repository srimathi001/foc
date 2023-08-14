#include<stdio.h>
#include<string.h>
union
{
	char name[25];
	int idno;
	float salary;
}desc;
int main()
{
	strcpy(desc.name,"vinod");
	printf("employee details\n");
	printf("the name is %s\n",desc.name);
	printf("the idno is %d\n",desc.idno);
	printf("the salary is %.2f \n",desc.salary);
	desc.idno=10;
	printf("employee details\n");
	printf("the name is %s\n",desc.name);
	printf("the idno is %d\n",desc.idno);
	printf("the salary is %.2f \n",desc.salary);
	desc.salary=6500.00;
	printf("employee details\n");
	printf("the name is %s\n",desc.name);
	printf("the idno is %d\n",desc.idno);
	printf("the salary is %.2f \n",desc.salary);
}
