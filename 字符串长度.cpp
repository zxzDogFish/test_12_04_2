#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen( char* str )
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;//x64 charָ��ֻռһ���ֽ�
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