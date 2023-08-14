#include<stdio.h>
int main()
{
	FILE *fp;
	char c;
	fp=fopen("TEXT","w");
	printf("enter text-\n");
	while((c=getchar())!=EOF)
	{
		fputc(c,fp);
	}
	fclose(fp);
	printf("displaying text from file:\n");
	fp=fopen("TEXT","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}
