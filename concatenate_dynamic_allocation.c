#include<stdio.h>
#include<malloc.h>
int main()
{
	char *s1,*s2,*s3,c;
	int i,j,k; clrscr();
	s1=(char*)malloc(length * sizeof(char));
	s2=(char*)malloc(length * sizeof(char));
	s3=(char*)malloc(2 * length * sizeof(char));
	printf("Enter string one :");
	scanf("%s" s1);
	printf("Enter string two :" ):
	scanf("%s",s2);
	i=0;
	while((c=(s1+i))!="\0')
	{
		s3[i]=c;
		i=i+1;
	}
	k=0;
	while((c=*(s2+k))!='\0')
	{
		s3[i+k]=c;
		k=k+1;
	}
	printf("concatenated string is:\n");
	printf("%s\n",s3);
}
