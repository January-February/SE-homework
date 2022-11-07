#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = { 'H','e','l','l','o',' ','W','o','r','l','d','!','\0' };
	for (int i = 0; i < strlen(arr); i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}