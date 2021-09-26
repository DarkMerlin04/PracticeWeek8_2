#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	scanf("%s", a);
	int b = strlen(a);
	for (int i = b; i >= 0; i--)
	{
		printf("%c", a[i]);
	}
	return 0;
}