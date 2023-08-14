#include<stdio.h>
int main()
{
	FILE *fp;
	int c,count=0;
	printf("enter characters\n");
	printf("press ctrl+z to stop entry..\n");
	fp=fopen("str.txt","w");
	while((c=getchar())!=EOF)
	{
		fputc(c,fp);
	}
	fclose(fp);
	printf("\n");
	fp=fopen("str.txt","r");
	while((c=fgetc(fp))!=EOF)
	{
		printf("%c",(char)c);
		count++;
	}
	fclose(fp);
	printf("\n no of characters in the file:%d",count);
}
