#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//Ҫ��ʵ��һ������m~n��m < n��֮�����������ĺ͵ļ򵥺�����
//����m��n���û�����Ĳ�������֤��m < n���������ص���m~n֮�����������ĺ͡�
int main()
{
	int m, n;
	int sum = 0;
	scanf("%d%d",&m,&n);
	for (int i = m; i <= n; i++)
		sum += i;
	printf("%d\n", sum);
	return 0;
}