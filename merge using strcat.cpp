#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("enter the first string:");
	gets(str1);
	printf("enter the second string:");
	gets(str2);
	strcat(str1,str2);
	printf("combined string:%s\n",str1);
	return 0;
	
}
