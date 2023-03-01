#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1、求m到n之和
int sum(int m, int n)
{
		int max, min;
		if (m >= n)
		{
			max = m;
			min = n;
		}
		else
		{
			max = n;
			min = m;
		}
		int s = 0;
		for (int i = min;i <= max; i++)
		{
			s = s + i;
		}
		return s;
}
int main()
{
	int m, n;

	scanf("%d %d", &m, &n);
	printf("sum = %d\n", sum(m, n));

	return 0;
}