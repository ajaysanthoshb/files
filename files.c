#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp,*fptr;
	char s[50],n;
	int i=0,j,k;
	fp = fopen("hello.txt","r");/*this file contain the word "My Captain"*/
	fptr = fopen("hi.txt","w");/*this file is empty*/
	s[i] = fgetc(fp);
	while(s[i] != EOF)/*copy one file content to another*/
	{
		fputc(s[i],fptr);
		i++;
		s[i] = fgetc(fp);
	}
	s[i] = '\0';
	for(i = strlen(s);i >= 0;i--)/*display content from last character to first character in file*/
	{
		printf("%c",s[i]);
	}
	fclose(fp);
	fclose(fptr);
	
}
