#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>
void main()
{
	char *buffer;
	if((buffer=(char*)malloc(10))==NULL)
	{
		printf("malloc failed\n");
		exit(1);
	}
	printf("buffer of size %d created \n",msize(buffer));
	strcpy(buffer,"bombay");
	printf("buffer contains:%s\n",buffer);
	if((buffer==(char*)realloc(buffer,15))==NULL)
	{
		printf("reallocation failed\n");
		exit(1);
	}
	printf("buffer size modified\n");
	printf("buffer still contains :%s\n",buffer);
	strcpy(buffer,"mumbai");
	printf("buffer now contains:%s\n",buffer);
	free(buffer);
}
