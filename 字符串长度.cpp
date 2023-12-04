#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen( char* str )
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;//x64 char指针只占一个字节
	}
	return count;
}
int main()
{
	char arr[] = "bit";
	int len;
	len = my_strlen(arr);
	printf("%d", len);
	return 0;
}