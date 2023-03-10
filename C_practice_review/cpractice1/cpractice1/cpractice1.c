#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//要求实现一个计算m~n（m < n）之间所有整数的和的简单函数。
//其中m和n是用户传入的参数，保证有m < n。函数返回的是m~n之间所有整数的和。
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