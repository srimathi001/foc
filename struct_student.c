#include<stdio.h>
struct stud
{
	int sno,mark1,mark2,mark3,total;
	float average;
	char name[50],grade;
}a[25];
int main()
{
	int i,n;
	printf("enter the number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the %d students details",i+1);
		printf("\nRollno:");
		scanf("%d",&a[i].sno);
		printf("name:");
		scanf("%s",&a[i].name);
		printf("mark1:");
		scanf("%d",&a[i].mark1);
		printf("mark2:");
		scanf("%d",&a[i].mark2);
		printf("mark3:");
		scanf("%d",&a[i].mark3);
		a[i].total=0;
		a[i].total=a[i].mark1+a[i].mark2+a[i].mark3;
		a[i].average=a[i].total/3;
		if(a[i].average<40)
		{
			a[i].grade='D';
		}
		else if(a[i].average<60)
		{
			a[i].grade='C';
		}
		else if(a[i].average<80)
		{
			a[i].grade='B';
		}
		else
		{
			a[i].grade='A';
		}
	}
	printf("\t\tstudent mark details: \n");
	printf("\n Rollno\t Name \t\tmark 1\tmark 2\tmark 3\ttotal\taverage");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s\t\t%d\t%d\t%d\t%d%.2f\t%c",a[i].sno,a[i].name,a[i].mark1,a[i].mark2,a[i].mark3,a[i].total,a[i].average,a[i].grade);
	}
}
